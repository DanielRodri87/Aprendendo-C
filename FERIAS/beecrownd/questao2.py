# #include <stdio.h>

# int main() {
#     int x, y;

#     while (scanf("%d %d", &x, &y) != EOF) {
#         if (x > 0 && y > 0) {
#             printf("primeiro\n");
#         } else if (x < 0 && y > 0) {
#             printf("segundo\n");
#         } else if (x < 0 && y < 0) {
#             printf("terceiro\n");
#         } else if (x > 0 && y < 0) {
#             printf("quarto\n");
#         } else {
#             break;
#         }
#     }

#     return 0;
# }

# Convetar para python

while True:
    x, y = map(int, input().split())

    if x > 0 and y > 0:
        print("primeiro")
    elif x < 0 and y > 0:
        print("segundo")
    elif x < 0 and y < 0:
        print("terceiro")
    elif x > 0 and y < 0:
        print("quarto")
    else:
        break
    