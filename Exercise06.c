#include<stdio.h>
int main(){

    int a[5] = { 2, 5, 6, 8, 9};
    printf(" Mang ban dau la \n");
     for ( int i=0; i< sizeof(a)/sizeof(int); i++){
        printf("%d\t", a[i]);
     }

    for ( int i=0; i< sizeof(a)/sizeof(int); i++) {
        if(a[i] % 2 == 0) {
            a[i] += 3;
        } else {
            a[i] += 2;
        }
    }
    printf("\n Mang sau khi da thay doi la \n");
    for ( int i=0; i< sizeof(a)/sizeof(int); i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}