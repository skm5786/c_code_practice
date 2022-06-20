#include <stdio.h>
#include <math.h>
int main()
{
    int a,i,j=0,l,temp,temp2;
    printf("enter integer\n");
    scanf("%d",&a);
    temp=a;
    while (a!=0) {
        a=a/10;
        j=j+1;
    }
    a=temp;
    temp2=j;
    printf("number of digits\n");
    printf("%d\n",j);
    for (i=0; i<temp2; i++) {
        l=(a/(pow(10, j-1)));
        a=a/10;
        j--;
        if (l == 1)
                        printf("One ");
                    else if (l == 2)
                        printf("Two ");
                    else if (l == 3)
                        printf("Three ");
                   else if (l == 4)
                        printf("Four ");
                  else  if (l == 5)
                        printf("Five ");
                  else  if (l == 6)
                        printf("Six ");
                   else if (l == 7)
                        printf("Seven ");
    else    if (l == 8)
            printf("Eight ");
       else if (l == 9)
            printf("Nine ");
    }
        
        
        
        
    
    return 0;
}
