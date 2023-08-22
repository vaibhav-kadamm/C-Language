#include <stdio.h>

typedef struct date{
    int date ;
    int month ;
    int year ;
}date;

void display(date d){
    printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(date d1,date d2){
    // make decision on the basis of year 
    if(d1.year>d2.year){
        return 1;
    }
    if (d1.year<d2.year){
        return -1;
    }
     // make decision on the basis of month
    if(d1.month>d2.month){
        return 1;
    }
    if (d1.month<d2.month){
        return -1;
    }
     // make decision on the basis of date
    if(d1.date>d2.date){
        return 1;
    }
    if (d1.date<d2.date){
        return -1;
    }
    return 0;
}

int main(){
    date d1={05,03,22};
    date d2={05,03,25};
    display (d1);
    display (d2);
    int a=datecmp(d1,d2);
    printf("date comparison function returns : %d",a);
    return 0;
}