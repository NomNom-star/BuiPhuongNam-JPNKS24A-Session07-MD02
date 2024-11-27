#include<stdio.h>
int main(){

    int n;
    printf(" Nhap vao so phan tu cua mang\t");
    scanf("%d", &n);
    int a[n];
    for( int i= 0; i<sizeof(a)/sizeof(int); i++){
        printf("Nhap vao phan tu a[%d]\n", i);
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            printf(" Nhap lai 1 so le\n");
            i--;
        }
    }
    printf(" \nMang so le ban vua nhap la\n");
    for( int i= 0; i<sizeof(a)/sizeof(int); i++) {
        printf("%d\t ", a[i]);
    }

    return 0;
}