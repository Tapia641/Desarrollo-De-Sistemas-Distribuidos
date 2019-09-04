import random
import string
import time

start = time.time()


def randomString():
    """Generate a random string of fixed length """
    user_input = input("Ingresa un numero: ")
    val = int(user_input)
    your_letters = 'abcdefghijklmnopqrstuvwxyz'
    cadenota = []
    for i in range(val):
        # agregar condicion si encuentra cadena ipn
        var = (''.join((random.choice(your_letters) for i in range(3))))
        cadenota.append(var)
        print(cadenota)
        print(cadenota.count("ipn"))
    end = time.time()
    print(end - start)



randomString()
