#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i=0,j,l=0,num=0;
    
   char  str[20];
    printf("enter string\n");
    scanf("%s",str);
    while (str[i]!='\0') {
        i++;
    }
   
    while (i>0) {
        j=str[l]-48;
        num=num+j*(pow(10, i-1));
        l++;
        i--;
    }
    printf("answer in integer form\n");
    printf("%d\n",num);
    return 0;
}
