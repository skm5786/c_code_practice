#include <stdio.h>
void quicksort(int*,int,int);
int Partition(int*,int,int);
int main()
{
     int a[9]={3,54,1,53,65,12,23,75,23};
    for (int i=0; i<9; i++) {
        printf("%d, ",a[i]);
    }
    printf("\n");
    quicksort(a,0,8);
    for (int i=0; i<9; i++) {
        printf("%d, ",a[i]);
    }
    
    
    return 0;
}
void quicksort(int *A,int l,int h)
{
    int partitionindex;
    
   
    if (l<h) {
        partitionindex=Partition(A,l,h);
        quicksort(A,l,partitionindex-1);
        quicksort(A,partitionindex+1,h);
        
    }
}
int Partition(int *A,int l,int h)
{
    int pivot=A[l];
    int i=l+1;
    int j=h;
    int temp;
  do{
   while (A[i]<=pivot) {
        i++;
    }
    while (A[j]>pivot) {
        j--;
    }
    if (i<j) {
        temp=A[i];//swap when  left and right elements are found
        A[i]=A[j];
        A[j]=temp;
    }
  }while(i<j);
    //do while loop ended.
    temp=A[l];//swap when i and j crosses or meets
    A[l]=A[j];
    A[j]=temp;
    
    return j;//j is the partitionindex
}
