#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,cmp;
    char temp[10];
    char names[5][10]={
        "raman",
        "rahul",
        "abhay",
        "sumit",
        "ishan"
    };
    for (i=0; i<5; i++) {
       
        for (j=0; j<5-i; j++) {
            cmp=strcmp(names[j], names[j+1]);
            if (cmp>0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
        }
    }
    }
    for (i=0; i<5; i++) {
        printf("%s\n",names[i]);
    }
    
    return 0;
}
