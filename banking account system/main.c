#include <stdio.h>
#include <string.h>
struct bankingdetails{
    char Accountno[15];
    char name[20];
    int balance;
    
};
int main()
{
    int i,amount,code,l;
    char Acno[15];
    struct bankingdetails b[5];
    struct bankingdetails*ptr;
    for (i=0; i<5; i++) {
        printf("add details of banking person %d\n",i+1);
        scanf("%s%s%d",b[i].Accountno,b[i].name,&b[i].balance);
    }
    for (i=0; i<5; i++) {
        if (b[i].balance<100) {
            ptr= &b[i];
            printf("account number=%s, name=%s  ",ptr->Accountno,ptr->name);
            printf("\n");
        }
    }
    
    printf("enter account number\n");
    scanf("%s",Acno);
    printf("enter amount\n");
    scanf("%d",&amount);
    printf("enter code 0 for withdrawl 1 for deposit\n");
    scanf("%d",&code);
    for (i=0; i<5; i++) {
       l= strcmp(Acno, b[i].Accountno);
        if (l==0) {
            if (code==1) {
                b[i].balance=b[i].balance+amount;
                printf("deposit successful\n");
            }
            if (code==0) {
                if (b[i].balance-amount>100) {
                    b[i].balance=b[i].balance-amount;
                    printf("withdrawl successful\n");
                }
                else{
                    printf("insufficient balance\n");
                }
            }
        }
        if (l==0) {
            break;
        }
    }
    printf("new amount =%d\n",b[i].balance);
    return 0;
}
