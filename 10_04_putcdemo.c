#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("putcdemo.txt","w");
    put('c',ptr);
    put('c',ptr);
    put('c',ptr);
   
    fclose(ptr);
    return 0;
}