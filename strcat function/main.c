#include <stdio.h>
void xstrcat(char*,char*);
int main()
{
    char *source="folks!";
    char target[20]="hello";
    xstrcat(target, source);
    printf("concatenated string is %s\n",target);
    return 0;
}
void xstrcat(char *t,char *s)
{
    int i=0,j=0;
    while (t[i]!='\0') {
        i++;
    }
    while (s[j]!='\0') {
        t[i]=s[j];
        j++;
        i++;
    }
    t[i]='\0';
    
}
