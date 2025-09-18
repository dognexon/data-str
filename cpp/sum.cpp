#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int i = 1;


    printf("n값 입력");
    printf("n값:");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;

    }
    printf("1부터 %d까지의 총합은 %d입니다. \n",n,sum);
    return 0;
}