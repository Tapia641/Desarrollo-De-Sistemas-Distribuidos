import math


def calculos():
    user_input = input("Ingresa un numero: ")
    val = int(user_input)
    sin = 0
    cos = 0
    tan = 0
    logaritmo = 0
    root = 0
    i = 0
    while i < val:
        sin += math.sin(i)
        cos += math.cos(i)
        tan += math.tan(i)
        logaritmo += math.log10(i+1)
        root += math.sqrt(i)
        i += 1

calculos()
