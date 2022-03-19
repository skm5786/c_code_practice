/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches

inches to meters

*/
/*
 metre=1,cm=2,inches=3, foot=4, miles=5,km=6
 */
#include <stdio.h>
void mtoc(int m,int n)
{
    printf("enter nuber of metre\n");
    scanf("%d",&m);
    n=100*m;
    printf("%d metre is %d cm\n",m,n);
}
void kmtomi(int m,float n)
{
    
    printf("enter nuber of km\n");
    scanf("%d",&m);
    n=m/1.609;
    printf("%d km is %f miles\n",m,n);
    
}
int main()
{
    int  i,j,m,n;
    float k;
    printf("your unit 1\n");
    scanf("%d",&i);
    printf("your unit 2\n");
    scanf("%d",&j);
    
    
    switch (i) {
        case 1:
            if (i==1&&j==2) {
                mtoc (m,n);
            }
    }
       
            if (i==6&&j==5) {
                kmtomi(m,k);
            }
            
            
        
    
    return 0;
}
