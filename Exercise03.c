#include<stdio.h>
int main(){

    int a[5] = { 1, 2, 7, 6, 5};
    int slsc=0;

    for ( int i = 0; i < sizeof(a)/sizeof(int); i++){
      
        if(a[i]%2==0){
            printf("%d\t", a[i]);
            slsc++;
        }

    }
    if(slsc == 0){
        printf("Mang khong chua so chan\n");
    }
    return 0;
}