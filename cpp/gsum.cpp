#include <stdio.h>
//가우스 덧셈 알고리즘
int main(void)
{
    int n;
    int sum = 0;
    int i = 1;


    printf("n값 입력");
    printf("n값:");
    scanf("%d", &n);

    sum = ((n + i)*n)/2;
    printf("%d",sum);
}
