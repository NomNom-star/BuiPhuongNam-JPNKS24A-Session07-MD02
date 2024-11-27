#include<stdio.h>
int main(){

    int n;
    printf(" Hay nhap vao so phan tu cua mang\n");
    scanf("%d", &n);
    int a[n];
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