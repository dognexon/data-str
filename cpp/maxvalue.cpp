#include <stdio.h>
int main(){

    int a,b,c;
    
    printf("�� ������ �ִ��� ���մϴ�!\n");
    printf("a��: ");
    scanf("%d",&a);
    printf("b��: ");
    scanf("%d",&b);
    printf("c��: ");
    scanf("%d",&c);
    int max = a;
    
    if (max < b){
        max = b;
    } 
    if (max < c){
        max = c;
    }
    printf("�ִ��� %d�Դϴ�\n",max);
    return 0;
}