#include <stdio.h>
#include <math.h>
int main()
{
  float a[6][3]={
        {137.4,80.9,0.78}   ,
        {155.2,92.62,0.89},
        {149.3,97.93,1.35},
        {160.0,100.25,9.00},
        {155.6,68.95,1.25},
        { 149.7,120.0,1.75},
       };
    
    int i,z;
    float k,max=0;
    for (i=0; i<6; i++) {
        k=(1/2.0)*((a[i][0])*(a[i][1])*sinhf(a[i][2]));
        if (k>max) {
            max=k;
            z=i;
        }
    }
    printf("area=\t%f\n on eteration number=   %d\n",max,z+1);
    
    
    
    
    
    return 0;
}
