#include <stdio.h>
#include <stdlib.h>
int maxof(const int foo[], int elem_cnt){
    int max = foo[0];
    for (int i = 1; i < elem_cnt; i++){
        if (foo[i] > max) max = foo[i];
    }
    return max;
}



int main(void){
    int na;
    printf("components count");
    scanf("%d", &na);

    int *a = calloc(na, sizeof(int));

    if (a == NULL){
        puts("memory fail");
    }
    else{
        printf("enter %d values : \n");
        for (int i =0;i < na; i++){
            printf("a[%d] : ", i);
            scanf("%d", &a[i]);
        }
        printf("each component of values :\n");
        for(int i = 0; i <na; i++){
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }
}