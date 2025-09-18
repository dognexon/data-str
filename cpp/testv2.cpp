#include <stdio.h>

int main(void)
{
    int n;
    int foo;
    printf("정수:");
    scanf("%d", &n);

    foo = (n>0) ? 1 : 0;
    printf("%d", foo);
}