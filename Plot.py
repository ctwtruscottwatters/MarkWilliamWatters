import pylab as plt
import numpy as np
import os


# Charles Truscott


def main():
    
    y_of_x = []
    dydx = []
    x_of_y = []
    for x in range(0, 360 + 1, 15):
#        x_of_y.append(x)
        y_of_x.append(round(np.sin(x), 5))
        dydx.append(round(-(np.cos(x)), 5))
#    plt.xlabel("x = degrees from 0 to 360")
#    plt.ylabel("y = sin(x)")
#    plt.plot(x_of_y, y_of_x)
#    plt.savefig('Sine of 0 to 360.jpeg')
    plt.ylabel("dy/dx -cos(x)")
    plt.xlabel("y(x) = sin(0 to 360)")
    print(y_of_x, dydx, len(y_of_x), len(dydx))
    plt.plot(y_of_x, dydx)
    plt.savefig('sin x minus cos x dydx.jpeg')
    
if __name__ == "__main__":main()