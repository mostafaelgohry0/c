
#include "bubble.h"
#include "../utils/utils.h"

void bubble_sort(int *a,int s){
int i,j;

printf("the steps of bubble sort : \n");

    for( i=0 ;i<s;i++){

        for( j=0 ;j<s-i-1;j++){
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);

        }

        print_array(a,10);

    }
    printf("--------------------------------\n");
}
