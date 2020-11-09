import tellopy
import time

drone = tellopy.Tello()

drone.connect()

while True:
    if drone.connected:
        drone.takeoff()

        time.sleep(4)

        drone.flip_forward()

        time.sleep(4)

        drone.flip_back()

        time.sleep(4)

        drone.clockwise(360)

        time.sleep(15)
        drone.land()

    else: 
        pass
