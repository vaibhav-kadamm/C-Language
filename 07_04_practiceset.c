#include <stdio.h>
void printtable(int *multable, int num, int n){
    printf("the multiplication table of %d is : \n", num);
    for(int i=0; i<n; i++){
        multable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dx%d = %d\n", num, i+1, multable[i]);
    }
    printf("************************************************************\n\n");

}
int main(){
    int multable[3][10];
    printtable(multable[1], 3, 10);
    printtable(multable[2], 4, 10);
    printtable(multable[3], 5, 10);
    return 0;
}