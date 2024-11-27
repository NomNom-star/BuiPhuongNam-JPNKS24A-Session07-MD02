#include<stdio.h>
int main(){

    int a[6]= {0, 1, 3, 4, 5, 7};
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        printf("%d\n", a[i]);
    }
    printf(" Do dai cua mang la %d", sizeof(a)/sizeof(int));

    return 0;
}