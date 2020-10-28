#pip3 install pyserial
import serial
import sys

serialPortName = "COM7"
baudRate = 9600
try:
	s = serial.Serial(serialPortName,baudRate,timeout=1)
except:
	print("Failed to open", serialPortName, "as a serial port.. are you doing this right?")
	sys.exit(1)

print("Shit, it worked.. waiting for serial data...")


try:
	while(s.is_open):

		if(s.in_waiting>0):
			rxLine=s.readline().decode("ascii").strip()
			print("Recieved:",rxLine)

			#This is where i would unpack the recieved data with the right protocol
			#hints: 
			# rxsplit = rxline.split()
			# ax = float(rxsplit[0]) etc...
except:
	print("Something happened... did you just yank the thing out?")