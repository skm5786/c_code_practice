#include <stdio.h>

int main()
{
    int i=0;
    char *str;
    char *ptr="hello";
    char name[]="hello my name is sumit";
    str=name;
    puts(name);
    while (name[i]!=0) {
        printf("%c",*(str+i));
        i++;
    }
    printf("\n");
    printf("enter your name\n");
    scanf("%s",name);
    puts(name);
    ptr="bye";
    for (int j=0; j<4; j++) {
        printf("%c",*(ptr+j));
    }
    printf("\n");
    return 0;
}
