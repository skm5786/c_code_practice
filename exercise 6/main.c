/**A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.**/
#include <stdio.h>
int primefactors (int);
int main()
{
    int b;
    printf("enter a number:  \n");
    scanf("%d",&b);
    primefactors(b);
    return 0;
}
int primefactors (int n)
{
    int a;
    for (a=2; a<=n; a++) {
        while (n%a==0) {
            printf("%d, ",a);
            n=n/a;
        }
    }
    return 0;
}
