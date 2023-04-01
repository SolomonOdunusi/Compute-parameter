#include <stdio.h>

// int main() {
//     int s;
//  printf("Enter the length: ");
//     scanf("%u", &s);
//     printf("%u", s);
// }
int main() {
 int a = 15;
 int b = 24;
 printf("%d %d\n", b - a + 7, b - (a + 7));
 printf("%d %d\n", b - a - 4, b - (a - 4));
 printf("%d %d\n", b % a / 2, b % (a / 2));
 printf("%d %d\n", b * a / 2, b * (a / 2));
 printf("%d %d\n", b / 2 * a, b / (2 * a));
}