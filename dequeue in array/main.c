#include <stdio.h>

int main()
{
    int a,i,j;
    int p[3];
    
    p[1]=5;
    p[2]=6;
    printf("enter your value to be inserted \n");
    scanf("%d",&a);
    printf("enter operation 1 = insert left 2 = insert right\n");
    scanf("%d",i);
    switch (i) {
        case 1:
            *(p+0)=a;
            
            break;
            
        case 2:
            *(p+3)=a;
            break;
    }
    for (j=0; j<3; j++) {
        printf("%d,  ",p[j]);
    }
 
    
    
    
    
    return 0;
}
