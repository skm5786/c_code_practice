//fibonacci sequence using recursion
#include <stdio.h>
int fib(int j)
{
    if (j==0) {
        return 0;}
        else if(j==1)
        return 1;
        else;
        return (fib(j-1)+fib(j-2));
    }
 

int main()
{
    int x,n;
    printf("number of terms\n");
    scanf("%d",&n);
    for (x=0; x<n; x++) {
        printf("%d, ",fib(x));
    }
    
    return 0;
}


