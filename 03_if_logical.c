#include <stdio.h>

int main(){
    int age;
    printf("enter the age\n");
    scanf("%d", &age);
    //if (age!90) 
    if (age <= 70 && age >=18) 
        printf("you are above 18, you can drive\n");
    else
        printf("you are below 18 you cannot drive\n");
    return 0;
}