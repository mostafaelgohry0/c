#include "insertion.h"
#include "../utils/utils.h"
void insertion_sort(int a[],int s){
int i ,j;

printf("the steps of insertion sort : \n");

    for(i=1 ;i<s;i++){
      j=i-1;
        while(j>=0 && a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            j--;
           // i--;
        }

    print_array(a,10);


    }
    printf("--------------------------------\n");
}



