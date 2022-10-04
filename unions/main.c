#include <stdio.h>
#include <string.h>
int main()
{
    struct info1{
        char hobbie[15];
        int ccardno;
    };
    struct info2{
        char vehicleno[15];
        int distfromco;
    };
    union info{
        struct info1 a;
        struct info2 b;
    };
    struct emp{
        char name[15];
        char grade[5];
        int age;
        union info k;
    };
    struct emp e1;
    printf("enter name, grade, age\n");
    scanf("%s%s%d", e1.name, e1.grade,&e1.age);
    if (strcmp(e1.grade, "HSK")==0) {
        printf("enter hobbie and ccardno\n");
        scanf("%s%d",e1.k.a.hobbie,&e1.k.a.ccardno);
    }
    if (strcmp(e1.grade, "SSK")==0) {
        printf("enter vehicleno and  distfromco\n");
        scanf("%s%d",e1.k.b.vehicleno,&e1.k.b.distfromco);
    }
    printf("%s,  %d\n",e1.k.a.hobbie,e1.k.a.ccardno);
    return 0;
}
