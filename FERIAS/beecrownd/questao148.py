import math

px1 = int(input())
py1 = int(input())
px2 = int(input())
py2 = int(input())

resultado = 2

while px1 != 0 or py1 != 0 or px2 != 0 or py2 != 0:
    x = abs(px1 - px2)
    y = abs(py1 - py2)

    if px1 == px2 and py1 == py2:
        resultado = 0
        print(resultado)
    elif px1 == px2 and py1 != py2:
        resultado = 1
        print(resultado)
    elif px1 != px2 and py1 == py2:
        resultado = 1
        print(resultado)
    elif x == y:
        resultado = 1
        print(resultado)
    else:
        resultado = 2
        print(resultado)
    
    px1 = int(input())
    py1 = int(input())
    px2 = int(input())
    py2 = int(input())
    
    
    
