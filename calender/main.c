#include <stdio.h>
int starting_day_of_month(int,int);
int main()
{
    int year,month,i,startingday,weekday=0;
    char*Mon[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   
    printf("enter year\n");
    scanf("%d",&year);
    printf("enter month\n");
    scanf("%d",&month);
    if (((year%4==0)&&(year%100!=0))||(year%400==0)) {
        daysinmonth[1]=29;
    }
    printf("     %s %d",Mon[month-1],year);
    printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
   startingday=starting_day_of_month(year, month);
   
    for(weekday=0;weekday<startingday;weekday++){
        printf("     ");
    }
    for (i=1; i<=daysinmonth[month-1]; i++) {
        printf("%5d",i);
        weekday=weekday+1;
        if (weekday>6) {
            printf("\n");
            weekday=0;
        }
    }
    
       
    
    printf("\n");
    return 0;
}
int starting_day_of_month(int year ,int m){
    int w,C,D;
        C = year/100;
        D = year%100;
    w=(3+ ((13*m-1)/5) +D+ ((int)D/4) +((int)C/4)-2*C)%7;
    return w;
}


