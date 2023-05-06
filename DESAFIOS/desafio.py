hexadecimal = [0,1,2,3,4,5,6,7,8,9,"A","B","C","D","E","F"]
v = int(input())
r = []

while v > 0: 
    r.insert(0, hexadecimal[(v % 16)])
    v = v // 16

for i in range(len(r)):
    print(r[i], end="")
print()






# hexadecimal = [0,1,2,3,4,5,6,7,8,9,"A","B","C","D","E","F"]
# n = int(input())
# r = []
# v = []

# while n > 0: 
#     r.insert(0, hexadecimal[(n % 16)])
#     n = n // 16

# for i in range(len(r)):
#     v.append(str(r[i]))
    
# v = "".join(v)
# print(v)

