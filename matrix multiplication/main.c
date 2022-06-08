#include <stdio.h>

int main()
{
    int i,j;
    int sum[2][2]={0,0,0,0},a[2][3]={1,2,3,4,5,6},b[3][2]={7,8,9,10,11,12};
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            sum[i][j]+=a[i][j]*b[i][j];
        }
    }
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("%d  ",sum[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}
