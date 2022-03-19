#include <stdio.h>
#include <math.h>
int main(void)
{
    float x,j,i;
    int n;
    printf("enter number:  ");
    scanf("%f",&x);
    for (n=2,j=0; n<=7; n++) {
        i=0.5*pow( (x-1)/x,n);
        j=j+i;
        
    }
    printf("value of log is : %f \n",(x-1)/x + j);
}
