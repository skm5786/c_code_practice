//all squares for numbers less than 30 pythogran triplets

#include <stdio.h>
int main(void)
{
    int a,b,c;
    for (a=1; a<=30; a++) {
        for (b=1; b<=30; b++) {
            for (c=1; c<=30; c++) {
                if (c*c+b*b==a*a) {
                    printf("%d,%d,%d\n",c,b,a);
                }
            }
        }
    }
}

