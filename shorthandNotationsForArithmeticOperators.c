#include<stdio.h>
int main(void){
    int a;
    int b;

    a = 1;
    b = 2;

    a += 1;                 // a = a + 1 = 1 + 1 = 2
    printf("a: %d\n", a);
    a += b * 4;             // a = a + (b * 4) = 2 + (2 * 4) = 10
    printf("a: %d\n", a);
    a /= 2;                 // a = a / 2 = 10 / 2 = 5
    printf("a: %d\n", a);
    a %= 2;                 // a = a % 2 = 5mod2 = 1
    printf("a: %d\n", a);
    a -= 6;                 // a = a - 6 = 1 - 6 = -5
    printf("a: %d\n", a);
    a *= 3;                 // a = a * 3 = -5 * 3 = -15 
    printf("a: %d\n", a);

    return 0;
}