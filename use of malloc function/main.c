//using scanf in array of pointers to string using malloc function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char *names[6];
   char n[50];
    int long len;
    int i;
    char *p;
    for (i=0; i<6; i++) {
        printf("enter name\n");
        scanf("%s",n);
        len=strlen(n);
        p=(char*)malloc(len+1);
        strcpy(p, n);
        names[i]=p;
        
    }
    for (i=0; i<6; i++) {
        printf("%s, %u,%u\n",names[i],names[i],names[i+1]);
    }
   
    
    return 0;
}
