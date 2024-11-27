#include<stdio.h>
int main(){
     
    int a[5]= {1123, 51, 124, 62, 123};
    int max = a[0];
    int min = a[0];

    for(int i = 1; i< sizeof(a)/sizeof(int); i++){

        if(a[i]> max){
            max= a[i];
        }
        if(a[i]< min){
            min = a[i];
        }

    }
    printf(" Phan tu lon nhat cua mang la %d\n", max);
    printf(" Phan tu nho nhat cua mang la %d\n", min);


    return 0;
}