#include <stdio.h>

#define N 5
int main(){
    int foo[N];
    for (int i = 0; i <N; i++){ //각 요소에 값을 입력
        printf("foo[%d] : ", i);
        scanf("%d", &foo[i]);
    }
    puts("each value of component");
    for (int i = 0;i < N; i++){
        printf("foo[%d] = %d\n", i, foo[i]);
    }

}