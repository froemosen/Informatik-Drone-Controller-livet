#pip3 install pyserial
import serial
import sys
import controller

serialPortName = "COM8" #Skal sandsynligvis ændres. Kommer an på porten som arduino sidder i.  
baudRate = 9600 #Defineret i main.cpp
fejlStop = 0 #Bruges til at programmet forsøget at finde data mere end én gang. (Vi oplevede crashes fordi at serial.readline ikke var 100% reliable)
try:
	s = serial.Serial(serialPortName,baudRate,timeout=1)
except:
	print("Kunne ikke finde data gennem", serialPortName, "Husk at tjekke hvilket port arduino kører igennem")
	sys.exit(1)

print("Tilslutning lavet - Venter på serial data\n")

while(True):
	try:
		while(s.is_open):

			if(s.in_waiting>0):
					rxLine=s.readline().decode("ascii").strip()
					#print("Recieved:",rxLine) #Bruges hvis man gerne vil have den rå data printet ud

					
					rxSplit = rxLine.split(",") #Liste laves, hvor den splitter data efter hvert komma

					#Variabler defineres ud fra splittet liste
					btn0 = bool(rxSplit[0])
					btn1 = bool(rxSplit[1])
					btn2 = bool(rxSplit[2])
					btn3 = bool(rxSplit[3])
					btn4 = bool(rxSplit[4])
					joy0x = float(rxSplit[5])
					joy0y = float(rxSplit[6])
					joy1x = float(rxSplit[7])
					joy1y = float(rxSplit[8])

					#Script til dronebevægelse køres, med variablerne
					controller.main(btn0, btn1, btn2, btn3, btn4, joy0x, joy0y, joy1x, joy1y)
				
	except:
		print("Fejl efter tilslutning til serial (Fejlopsætning af arduino?)\nLeder efter ny data\n")
		fejlStop+=1

		if fejlStop > 30: #Der bliver ledt efter data 30 gange, da den ikke altid kan frembringe data første gang. 
			print("Fejl efter 30 forsøg. Lukker programmet efter input") #Efter 30 forsøg er det sikkert at systemet har en fejl. 
			input()
			break