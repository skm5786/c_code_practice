//checking whether number is prime or not

#include<stdio.h>
int main()
{ 
    int i,n;
    printf("number:  \n");
    scanf("%d",&n);

        
    
    for (i=2; i<=(n-1); i++) {
        if (n%i==0) {
            printf("number is composite\n");
            break;
            
       
        }
        }

    if (i==n) {
        printf("number is prime\n");
    }
    
        
        
    
       
    
    return 0;
}
