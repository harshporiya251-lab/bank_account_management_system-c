#include<stdio.h>
#include<conio.h>
void main()
{
    char account_holder_name[20];
    int account_number;
    float balance,deposit,withdrawal;
    printf(" Account holder name:");
    scanf("%s",&account_holder_name);
    printf(" Account number:");
    scanf("%d",&account_number);
    printf(" Enter the initial balance:");
    scanf("%f",&balance);
    printf(" Enter the amount to deposit:");
    scanf("%f",&deposit);
    balance=balance+deposit;
    printf("\n Updated balance after deposit=%f",balance);
    printf("\n Enter the amount to withdraw:");
    scanf("%f",&withdrawal);
    if (withdrawal>balance)
    {
        printf("\n Insufficient balance");
    }
    else
    {
        balance=balance-withdrawal;
        printf("\n Updated balance after withdrawal=%f",balance);
    }
    getch();
}