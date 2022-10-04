#include <stdio.h>
void bubblesort(int *);
int main()
{
    int i,n=6;
    int a[6]={1,2,3,4,5,6},b[6]={11,34,56,12,566,87};
    
    bubblesort(a);
    printf("\n");
    bubblesort(b);
    for (i=0; i<6; i++) {
        printf("%d,  ",a[i]);
    }
    printf("\n");
    for (i=0; i<6; i++) {
        printf("%d,  ",b[i]);
    }
    
    
    return 0;
}
void bubblesort(int a[]){
    int i,j,n=6,temp;
    int issort=0;
    for (i=0; i<n-1; i++) {//operation number for loop
        printf("operation number=%d\n",i+1);
         issort=1;
        for (j=0; j<n-1-i; j++) {//element checking and swapping for loop
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issort=0;
            }
        }
            if (issort==1) {
                return ;
            }
        
    }
}

