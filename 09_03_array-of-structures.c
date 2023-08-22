#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100];

    facebook[0].code=100;
    facebook[0].salary=34.444;
    strcpy(facebook[0].name,"happy");   

    

    facebook[1].code=100;
    facebook[1].salary=34.444;
    strcpy(facebook[0].name,"hary");
    

    facebook[2].code=100;
    facebook[2].salary=34.444;
    strcpy(facebook[0].name,"vaibhav");

    printf("i had done it");
    return 0;
}