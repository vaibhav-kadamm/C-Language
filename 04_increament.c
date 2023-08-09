#include <stdio.h>

int main(){
    int i = 5;
    printf(" the value of i++ is %d\n", i++);
    printf(" the value of i is %d\n", i);
     i++; // ----> first print then increment 
     ++i; // -----> first increment then print 
     i+=10; // ------> increments i by 10
     printf(" the value of i is %d\n", i);
    return 0;
}