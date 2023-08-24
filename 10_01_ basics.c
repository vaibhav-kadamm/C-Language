#include <stdio.h>

int main(){
    FILE *ptr;
    int num ;
   // int num2;
    ptr = fopen("vaib.txt","r");
    if (ptr==NULL){
    printf("the file does not exist\n");
    }
    else{
    fscanf(ptr, "%d", &num);
   // fscanf(ptr,"%d", &num2);
    printf("the value of num is %d\n",num);
     }
     fclose(ptr);
      return 0;
}