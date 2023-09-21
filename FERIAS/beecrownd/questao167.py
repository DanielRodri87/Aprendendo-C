# #include <stdio.h>

# int main()
# {
#     int a, b, c, d;
#     scanf("%d %d %d %d", &a, &b, &c, &d);

#     if (a < b + c && b < a + c && c < a + b)
#     {
#         printf("S\n");
#     }
#     else if (a < b + d && b < a + d && d < a + b)
#     {
#         printf("S\n");
#     }
#     else if (a < c + d && c < a + d && d < a + c)
#     {
#         printf("S\n");
#     }
#     else if (b < c + d && c < b + d && d < b + c)
#     {
#         printf("S\n");
#     }
#     else
#     {
#         printf("N\n");
#     }

#     return 0;
# }

a, b, c, d = map(int, input().split())
if a < b + c and b < a + c and c < a + b:
    print("S")
elif a < b + d and b < a + d and d < a + b:
    print("S")
elif a < c + d and c < a + d and d < a + c:
    print("S")
elif b < c + d and c < b + d and d < b + c:
    print("S")
else:
    print("N")
    
