#include "selection.h"

#include "../utils/utils.h"

void selection_sort(int *a,int s){
int i ,j;
printf("the steps of selection sort : \n");
    int min_i;
    for(i=0 ;i<s-1;i++){
         min_i =i;
        for(j=i+1 ;j<s;j++){
            if(a[min_i]>a[j])
            min_i = j ;

        }
         swap(&a[i],&a[min_i]);
         print_array(a,10);

    }

    printf("--------------------------------\n");
}





