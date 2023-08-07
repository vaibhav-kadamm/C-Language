#include <stdio.h>

int main(){
    int physics, maths , chemistry;
    float total;
    printf(" enter the physics marks\n ");
    scanf("%d", &physics);

     printf(" enter the maths marks\n ");
    scanf("%d", &maths);

    printf(" enter the chemistry marks\n ");
    scanf("%d", &chemistry);
    total = (physics + maths + chemistry)/3;
    if((total<40) || physics<33 || maths<33 || chemistry<33){
        printf(" your total percentage is %f and your are fail\n", total);
    }
    else{
        printf(" your total percentage is %f and you are pass\n",total);
    }
    return 0;
}