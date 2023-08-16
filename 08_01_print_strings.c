#include <stdio.h>

int main(){
   char str[] = {'V','A','I','B','H','A', 'V' ,'\0'};
    char *ptr = str;
    while(*ptr!= '\0'){
        printf(" %c",*ptr);
        ptr++;
    }
    return 0;
}