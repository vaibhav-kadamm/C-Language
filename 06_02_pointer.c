#include <stdio.h>

int main(){
    int i=34;
    int *j=&i;//j will store adress of i
    printf(" the value of i is %d\n",i);
    printf(" the value of j is %d\n",j);
    printf(" the address of i is %u\n",i);
    printf(" the address of j is %u\n",j);
    return 0;
}