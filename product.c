#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers and I'll give you the product: ");
    scanf("%d%d",&a, &b);
    printf("\nThe product of %d and %d is %d", a, b, a*b);
    return 0;
}