#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char anme[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    (*ptr).code = 101;  
   // ptr->code=101; also write like this it is arrow operator
    printf("%d", e1.code);
    
    return 0;
}