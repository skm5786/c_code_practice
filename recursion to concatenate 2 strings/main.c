#include <stdio.h>
#include <string.h>
char * str_cat(char*,char*,int);
int main()
{
    char str1[20]= "hello" ;
    char str2[20]= "world" ;
    printf("%s",str_cat(str1, str2,0));
    return 0;
}
char * str_cat(char* dest,char* source,int index){
    int x=strlen(dest);
    dest[x+1]=source[index];
    if(source[index]=='\0'){
        dest[index+1]='\0';
        return dest;
    }
    else
        str_cat(<#char *dest#>, <#char *source#>)
}
