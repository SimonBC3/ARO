import math
import matplotlib.pyplot as plt

RPM_LEFT = 55
RPM_RIGHT = 100
RPM2RAD = (2 * math.pi) / 60
TIME = 0.01
RADIUS = 16.8
BASE = 65
OMEGA = 0
X = 0
Y = 0
PERIOD = 0

def main():
    global RPM_RIGHT, RPM_LEFT, TIME, PERIOD   
    while 1:
        value = input('''\nSelect a number: 
            \r0 to exit  
            \r1 to change rpm (default L: 55 R:100)
            \r2 to change period (default 0)
            \r3 solve \n''')
        if (value == '0'):
            exit()
        elif (value == '1'):
            RPM_LEFT = float(input('input rpm left\n'))
            RPM_RIGHT = float(input('input rpm right\n'))
        elif (value == '2'):
            PERIOD = float(input('set period\n'))
        elif (value == '3'):
            solve()
        else:
            print('\n wrong number \n')
    

def solve(): 
    global OMEGA, X, Y, TIME

    print('\nCalculating parameters...\n')
    vr = RADIUS * RPM_RIGHT * RPM2RAD
    vl = RADIUS * RPM_LEFT * RPM2RAD
    v = (vr + vl)/2
    w = (vr - vl) / BASE
    
    if PERIOD != 0:
        create_plot(w, v)
    else :
        calculate_point(w, v)

    print(f'''Result:
        \r Linear velocity of the right wheel {round(vr,2)} mm/s
        \r Linear velocity of the right wheel {round(vl,2)} mm/s
        \r Linear velocity of the vehicle {round(v,2)} mm/s
        \r Angular velocity of the vehicle {round(w,2)} mm/s
        \r Coordinates of the vehicle ({round(X,2)}, {round(Y,2)}, {round(OMEGA,2)})
        \r Does the vehicle move straight {OMEGA == 0 or False }''')
    
    reset_values()


def create_plot(w, v):
    global PERIOD, TIME
    ax = plt.subplot()
    
    x_points = []
    y_points = []
    for i in range(10): # This range indicates the number of points that are being generated
        TIME = PERIOD * i
        calculate_point(w, v)
        x_points.append(X)
        y_points.append(Y)
    
    ax.plot(x_points, y_points)
    plt.show()

def calculate_point(w, v):
    global TIME,OMEGA, PERIOD, X, Y
    OMEGA = OMEGA + w * TIME
    X = X + v * math.cos(OMEGA) * TIME
    Y = Y + v * math.sin(OMEGA) * TIME

def reset_values():
    global TIME, OMEGA, X, Y
    TIME = 0.01
    OMEGA = 0
    X =  0
    Y = 0

if __name__ == '__main__':
    main()