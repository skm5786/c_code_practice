#include <stdio.h>

int main()
{
    int i, n,j;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find sum of all numbers */
    for(i=1,j=0; i<=n; i++)
    {
        j=j+i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, j);

    return 0;
}
