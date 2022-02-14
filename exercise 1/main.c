//all prime numbers between 1 to 300
#include <stdio.h>

int main()
{
    int i,n;
    for (i=1; i<=300; i++) {
        
        for (n=2; n<=i; n++) {
            if (i%n==0){
                break;}
            
        
            else if  (i==n+1){
            
                printf("%d\n",i);
            }
            
            
        
        
        
       
    }
   
    
        
   
    
    
    }
    return 0;
}
