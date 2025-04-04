#include<stdio.h>
int main(){
    int bal=1500;
    int acc=0;
    int dep=0;
    int rate=0;
    int time=0;
    int wd=0;
    int interest=0;
    char ch;
    printf("\tHELLO\n THIS IS A BASIC LEVEL BANKING SIMULATOR\n");
    printf("Choose what you want to do\n");
    printf("O---->Open a new bank account\n");
    printf("D---->To deposit\n");
    printf("B---->To check balance\n");
    printf("W---->For withdrawal\n");
    printf("I---->To add and check interest\n");
    scanf(" %c",&ch);
    switch(ch){
        case 'O':
            printf("Enter your aadhar number:-\n");
            scanf("%d",&acc);
            printf("YOUR ACCOUNT HAS BEEN CREATED SUCCESSFULLY!!!\n");
            printf("Your aadhar number is your account number\n");
            break;
        case 'D':
            printf("Enter your account number\n");
            scanf("%d",&acc);
            printf("Enter the amount that you want to deposit:\n");
            scanf("%d",&dep);
            bal=bal+dep;
            printf("The amount has been deposited successfully\ncurrent balance %d\n",bal);
            break;
        case 'B':
            printf("Enter your account number\n");
            scanf("%d",&acc);
            printf("The current balance is %d\n",bal);
            break;
        case 'W':
            printf("Enter your account number\n");
            scanf("%d",&acc);
            printf("Enter the amount that you want to withdraw:-\n");
            scanf("%d",&wd);
            if(wd>bal){
                printf("Insufficient Balance\n");
            }
            else{
                bal=bal-wd;
                printf("The new balance after withdrawal is %d\n",bal);
            }
            break;
        case 'I':
            printf("Enter your account number\n");
            scanf("%d",&acc);
            printf("Enter the rate of interest\n");
            scanf("%d",&rate);
            printf("Enter the time period\n");
            scanf("%d",&time);
            interest=(bal*rate*time)*0.01;
            printf("The interest is %d\nAnd your current balance is %d\n",interest,bal+interest);
            break;                       
    }
    return 0;
}
