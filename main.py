#pip3 install pyserial
import serial
import sys

serialPortName = "COM6" #Skal sandsynligvis ændres. 
baudRate = 9600 #Defineret i main.cpp
try:
	s = serial.Serial(serialPortName,baudRate,timeout=1)
except:
	print("Kunne ikke finde data gennem", serialPortName, "Husk at tjekke hvilket port arduino kører igennem")
	sys.exit(1)

print("Tilslutning lavet - Venter på serial data")


try:
	while(s.is_open):

		if(s.in_waiting>0):
			rxLine=s.readline().decode("ascii").strip()
			print("Recieved:",rxLine)


			#Her skal laves system med udpakning af data (Måske lavet nyt script, så tingene er opdelt lidt mere?)
			# rxsplit = rxline.split()
			# ax = float(rxsplit[0]) etc...
except:
	print("Fejl efter tilslutning til serial (Fejlopsætning af arduino!)")