import tellopy
drone = tellopy.Tello(port=9000) #Drone defineres
drone.connect() #Virker det her? heh
drone.start_video() #Virker det her? he#Virker det her? hehh

btn0Cool = False
btn1Cool = False
btn2Cool = False
btn3Cool = False
btn4Cool = False
joy0Cool = False
joy1Cool = False


def main(btn0, btn1, btn2, btn3, btn4, joy0x, joy0y, joy1x, joy1y): 
    #Her skal alle kommandoer osv til dronen skrives ind. Lige nu printer programmet bare variablerne ud. 
    print("btn0:", btn0)
    print("btn1:", btn1)
    print("btn2:", btn2)
    print("btn3:", btn3)
    print("btn4:", btn4)
    print("joy0x:", joy0x)
    print("joy0y:", joy0y)
    print("joy1x:", joy1x)
    print("joy1y:", joy1y)

    if btn0 == False and btn0Cool == False:
        btn0Cool = True
        btn1Cool = False
        btn2Cool = False
        btn3Cool = False
        btn4Cool = False
        joy0Cool = False
        joy1Cool = False

    elif btn1 == False and btn1Cool == False:
        btn0Cool = False
        btn1Cool = True
        btn2Cool = False
        btn3Cool = False
        btn4Cool = False
        joy0Cool = False
        joy1Cool = False

    elif btn2 == False and btn2Cool == False:
        btn0Cool = False
        btn1Cool = False
        btn2Cool = True
        btn3Cool = False
        btn4Cool = False
        joy0Cool = False
        joy1Cool = False

    elif not btn3:
        btn0Cool = False
        btn1Cool = False
        btn2Cool = False
        btn3Cool = True
        btn4Cool = False
        joy0Cool = False
        joy1Cool = False

    elif not btn4:
        btn0Cool = False
        btn1Cool = False
        btn2Cool = False
        btn3Cool = False
        btn4Cool = True
        joy0Cool = False
        joy1Cool = False

    elif joy0x > 700:
        #Trykket ned på joystick0
        btn0Cool = False
        btn1Cool = False
        btn2Cool = False
        btn3Cool = False
        btn4Cool = False
        joy0Cool = True
        joy1Cool = False

    elif joy1x > 700:
        #Trykket ned på joystick1
        btn0Cool = False
        btn1Cool = False
        btn2Cool = False
        btn3Cool = False
        btn4Cool = False
        joy0Cool = False
        joy1Cool = True


    #Joysticks? - Skal de være sådan skala-baserede hvor den flyver hurtigere når den er meget rykket?