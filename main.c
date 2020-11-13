
#include "sorting/sorting_test.h"



int *reverse_array(int *a ,int n );

int main()
{
// testing the sorting algorithms
  // sorting_test();
   //test_decimal_to_binary();
   char *c="j3erjgnjggjg";
   int (*p)[] =NULL;
   int s[8]={1,2,3,4,5,6,7,9};
   //printf("%d\n",sizeof(s));

   print_array(s,8);
  p = reverse_array(s,9);

  print_array(p,8);
    return 0;
}
