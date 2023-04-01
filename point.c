#include <stdio.h>


int main(void)
{
    int a;
    int *b;

    a = 100;
    b = &a;

    
    printf("Value of a is: %d\n", a);
    printf("Address of a is: %p\n", &a);
    printf("Value of b is: %p\n", b);
    printf("Address of b is: %p\n", &b);

    return (0);
}

