#include <stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Vaibhav";
    strcat(st1, st2);
    printf(" now st1 is %s", st1);
    return 0;
}
