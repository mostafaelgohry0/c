#include "../utils/utils.h"
int *reverse_array(int *a ,int n );
 //int n_arr[8];

int *reverse_array(int *a ,int n ){

    int i,j=0,temp;
   static int n_arr[8];
  //  int a[8]={1,2,3,4,5,6,7,8};
   // int *n_arr = (int*)malloc(n*sizeof(int));
   if(n%2==1)
   n--;

   for(i=0;i<n/2;i++){

   swap(&a[i],&a[n-1-i]);

   }
   /*
    for (i=7;i>=0;i--){

        n_arr[j]= a[i];
        j++;

    }
   */

    return a;
}
