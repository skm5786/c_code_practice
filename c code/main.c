// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include <stdio.h>
int main()
{
    float n,k1,k2;
    printf("enter number of units used:  \n");
    scanf("%f",&n);
    if (n<=50) {
        k1=n*0.50;
        printf("your total amount is %f\n",k1);
        
    }
    else if ((void)(n>50),n<=150)
    {
        k1=25+(n-50)*0.75;
        printf("your total amount is %f\n",k1);
    
}
    else if ((void)(n>150) , n<=250)
    {
        k1=100+(n-150)*1.20;
        printf("your total amount is %f\n",k1);
    }
    else if (n>250)
    {
        k1=220+(n-250)*1.50;
        printf("your total amount is %f\n",k1);
    }
    k2=k1+k1/5;
    printf("total amount with 20%% surcharge is %f\n",k2);
    return 0;
    

}
