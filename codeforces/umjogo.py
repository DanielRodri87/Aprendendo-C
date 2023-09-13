def find_last_number(n, num):
    num.sort(reverse=True)
    
    while len(num) > 1:
        jogador1 = num.pop(0)
        jogador2 = num.pop(0)
        resultado = abs(jogador1 - jogador2)
        num.append(resultado)
        num.sort(reverse=True)
    
    return num[0]

n = int(input())
num = list(map(int, input().split()))
resultado = find_last_number(n, num)
print(resultado)
