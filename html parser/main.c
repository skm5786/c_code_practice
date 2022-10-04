#include <stdio.h>
#include <string.h>
void parser(char *);
int main()
{
    char object[50];
    
    
    printf("enter string\n");
    gets(object);
    parser(object);
    printf("%s\n",object);
    
    return 0;
}
void parser(char *object){
    char b[50];
    int i,j=0,k=0;
    for (i=0; i<25; i++) {
        j++;
        if (object[i]=='>') {
            break;
        }
    }
        for (i=j; i<30; i++) {
            b[k]=object[i];
            k++;
            if(object[i]=='<'){
                break;
            }
        }
            b[k-1]='\0';
    i=0;
    while (b[i]!='\0') {
        object[i]=b[i];
        i++;
    }
    object[i]='\0';
}
