/* this function convert decimal number to binary
* parameter : int
* retrun : pointer  to array
*/
#include "../utils/utils.h"
void test_decimal_to_binary();
int * decimal_to_binary(int num);

int* decimal_to_binary(int num){
    // array of 32 element this is the size of int
    static int  bin[32];
    char i=0;
    for (i=0;i<32;i++){
      bin[i]=(num<<i & 1<<31)? 1:0;
    }


return bin ;
}

void test_decimal_to_binary(){
      int *data = decimal_to_binary(57564);
     print_array(data,32);
}
