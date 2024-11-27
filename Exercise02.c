#include<stdio.h>
int main(){

    int a[5];
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        printf(" Ban hay nhap vao phan tu a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    printf(" Mang ban vua nhap la: ");
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        printf("%d ", a[i]);
    }

    return 0;
}