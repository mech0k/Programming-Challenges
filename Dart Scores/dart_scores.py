#!/usr/bin/python3

def loops( n ):
    for x in range (1, 21):
        if x == n:
            print ("single", x)
            return
        elif 2*x == n:
            print ("double", x)
            return
        elif 3*x == n:
            print("triple", x)
            return
        for y in range (1, 21):
            if x + y == n:
                print("single", x)
                print("single", y)
                return
            elif x + 2*y == n:
                print("single", x)
                print("double", y)
                return
            elif x + 3*y == n:
                print("single", x)
                print("triple", y)
                return
            elif 2*x + 2*y == n:
                print("double", x)
                print("double", y)
                return
            elif 2*x + 3*y == n:
                print("double", x)
                print("triple", y)
                return
            elif 3*x + 3*y == n:
                print("triple", x)
                print("triple", y)
                return
            for z in range (1, 21):
                if x + y + z == n:
                    print("single", x)
                    print("single", y)
                    print("single", z)
                    return
                elif x + y + 2*z == n:
                    print("single", x)
                    print("single", y)
                    print("double", z)
                    return
                elif x + y + 3*z == n:
                    print("single", x)
                    print("single", y)
                    print("triple", z)
                    return
                elif x + 2*y + 2*z == n:
                    print("single", x)
                    print("double", y)
                    print("double", z)
                    return
                elif x + 2*y + 3*z == n:
                    print("single", x)
                    print("double", y)
                    print("triple", z)
                    return
                elif x + 3*y + 3*z == n:
                    print("single", x)
                    print("triple", y)
                    print("triple", z)
                    return
                elif 2*x + 2*y + 2*z == n:
                    print("double", x)
                    print("double", y)
                    print("double", z)
                    return
                elif 2*x + 2*y + 3*z == n:
                    print("double", x)
                    print("double", y)
                    print("triple", z)
                    return
                elif 2*x + 3*y + 3*z == n:
                    print("double", x)
                    print("triple", y)
                    print("triple", z)
                    return
                elif 3*x + 3*y + 3*z == n:
                    print("triple", x)
                    print("triple", y)
                    print("triple", z)
                    return

n = int(input())

arr = [ 161, 163, 164, 166, 167, 169, 170, 172, 173, 175, 176, 178, 179 ]
if arr.count(n) == 1:
    print ("impossible")
else:
    loops( n )
