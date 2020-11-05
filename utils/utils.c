
#include "utils.h"

void swap(int*x , int *y){
int temp ;
temp = *y ;
*y = *x ;
*x = temp;

}

void print_array(int *a ,int s){
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

}
