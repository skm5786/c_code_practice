#include <stdio.h>

int main()
{
    int i,j,temp;
    int a[]={1,2,3,4,5,6,7,8,9,10,11};
  
    for (i=0,j=10;i<=j; i++,j--) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for (i=0; i<11; i++) {
        printf("%d,  ",a[i]);
    }
    return 0;
}
