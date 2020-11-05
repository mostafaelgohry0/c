#include "sorting_test.h"

void sorting_test()
{

    int arr[]={7,5,3,8,2,9,1,0,4,6};
    print_array(arr,10);
    bubble_sort(arr,10);
    insertion_sort(arr,10);
    selection_sort(arr,10);
    printf("\n");
    print_array(arr,10);

}
