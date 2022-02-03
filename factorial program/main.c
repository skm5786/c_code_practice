#include <stdio.h>
#include <math.h>
int main()
{
    int f=1,n,i=1;
    printf("enter a number:  \n");
    scanf("%d",&n);
    do
       {
          
           f=i*f;
           
           i= i+1;
       }while(i<=n);
        
       printf("\n The Factorial of %d is %d\n",n,f);
    return 0;
    
}

