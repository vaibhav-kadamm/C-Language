#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    printf("the value of my character is %c\n", fgetc(ptr));
    return 0;
}