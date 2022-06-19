#include <stdio.h>
void Mergesort(int* A  ,int a,int b,int c);
void MS(int* A  ,int a,int c);
int main()
{
    int a[9]={3,54,1,53,65,12,23,75,23};
    int l=0,h=8;
    MS (a,l,h);
    for (int i=0; i<9; i++) {
        printf("%d, ",a[i]);
        
    }
    return 0;
}
void MS(int* A ,int a,int b)
{
   
    if (a<b) {
        int mid=(a+b)/2;
        MS(A, a,mid);
        MS(A, mid+1, b );
        Mergesort(A, a, mid, b);
    }
}
void Mergesort(int* A  ,int l,int mid,int h)
{
    int B[100];
    int i,j,k;
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid&&j<=h)
    {
        if (A[i]<A[j]) {
            B[k]=A[i];
            i++;
            k++;
        }
    
    
         else {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    
    while (i<=mid) {
        B[k]=A[i];
        i++;
        k++;
        
    }
    while (j<=h)
    {
        B[k]=A[j];
        j++;
        k++;
        
    }
    for (int z=l; z<=h; z++) {
        A[z]=B[z];
        
    }
    
}

