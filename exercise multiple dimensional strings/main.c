#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    int s,i,k=0;
    char *str[ ] = {
    "We will teach you how to...",
        "Move a mountain",
    "Level a building",
    "Erase the past",
    "Make a million",
    "...all through C!" };
    printf("enter word to be checked\n");
    scanf("%s",s1);
    printf("enter word to be exchanged\n");
    scanf("%s",s2);
    for (i=0; i<6; i++) {
        s=strcmp(str[i], s1);
        if (s==0) {
            str[i]=s2;
            k=1;
        }
    }
   
        for (i=0; i<6; i++) {
            printf("%s\n",str[i]);
        }
    
   
   
    return 0;
}
