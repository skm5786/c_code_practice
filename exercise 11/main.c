//prime factors using recursion
#include <stdio.h>
void primefact(int n);
int main()
{
    int n;
    printf("enter number:  \n");
    scanf("%d",&n);
    printf("prime factors of %d are:\n",n);
    primefact(n);
    return 0;
}
void primefact(int n)
{
    int a=2;
    if (n<=1) {
        return;
    }
    else if (n>1);{
    for (a=2; a<n; a++) {
        if (n%a==0) {
            printf("%d,  ",a);
            primefact(n/a);
        }
      
        
    }
     
            
        }
        
    }
            
        

           
        
    

  

