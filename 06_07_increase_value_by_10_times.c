#include <stdio.h>
void change(int *ptr){
    (*ptr)*=10;
}
int main(){
    int a;
    printf("enter the value a:\n");
    scanf("%d",&a);
    int *ptr=&a;

    printf("the current value of a is = %d\n",a);
    change(ptr);
    printf("now,the value of a is=%d\n",*ptr);
    return 0;
}