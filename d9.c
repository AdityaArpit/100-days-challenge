#include<stdio.h>
#include<stdlib.h>
// #include<aadi.h>

int main(){
    int sh[10]={99,96,94,70,64,63,42,33,29,25};
    int st[10]={78,47,73,49,37,59,22,27,10,4};
    int lh[10]={92,90,86,81,77,60,44,35,23,14};
    int lt[10]={88,69,31,79,56,41,38,26,2,8};

    printf("\t\tWELCOME\n");
    printf("\tTHIS IS SNAKES AND LADDERS\n");
    printf("Press\n1--> To play with a friend\n2---> To play with a bot\n");
    int ch=0;
    int p1=0;
    int p2=0;
    char pn1[10];
    char pn2[10];
    int th=0;
    scanf("%d",&ch);
    switch(ch){ 
        case 1:
            printf("Enter name of player 1:-\n");
            scanf("%s",pn1);
            printf("Enter name of player 2:-\n");
            scanf("%s",pn2);
            printf("the snakes are :-\n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d-->%d\n",sh[i],st[i]);
            }
            printf("the ladders are :-\n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d-->%d\n",lt[i],lh[i]);
            }
            while(p1<101 && p2<101){
                int dice=0;
                dice=(rand() % 6)+1;
                printf("%s's turn\n",pn1);
                printf("press 1 to throw the dice\n");
                scanf("%d",&th);
                while (th!=1){
                    printf("that's not 1 !!!\nTRY AGAIN!!!\n");
                    scanf("%d",&th);
                }
                printf("You got a %d\n",dice);
                if((p1+dice)<101){
                    p1=p1+dice;
                }
                for (int i = 0; i < 10; i++)
                {
                    if(p1==sh[i]){
                        printf("You landed on a snake, now you'll be sent to %d\n",st[i]);
                        p1=st[i];
                    }
                    if(p1==lt[i]){
                        printf("You landed on a ladder, now you'll be sent to %d\n",lh[i]);
                        p1=lh[i];
                    }
                }
                
                printf("%s is at %d\n\n",pn1,p1);
                if(p1==100){
                    break;
                }

                dice=(rand() % 6)+1;
                printf("%s's turn\n",pn2);
                printf("press 1 to throw the dice\n");
                scanf("%d",&th);
                while (th!=1){
                    printf("that's not 1 !!!\nTRY AGAIN!!!\n");
                    scanf("%d",&th);
                }
                printf("You got a %d\n",dice);
                if((p2+dice)<101){
                    p2=p2+dice;
                }
                for (int i = 0; i < 10; i++)
                {
                    if(p2==sh[i]){
                        printf("You landed on a snake, now you'll be sent to %d\n",st[i]);
                        p2=st[i];
                    }
                    if(p2==lt[i]){
                        printf("You landed on a ladder, now you'll be sent to %d\n",lh[i]);
                        p2=lh[i];
                    }
                } 
                printf("%s is at %d\n\n",pn2,p2);
                if(p2==100){
                    break;
                }
                printf("-------------------------------------------------\n");

            }
            if(p1==100){
                printf("\tCONGRATULATIONS to %s\nYou won\nbetter luck next time %s",pn1,pn2);
            }   
            if(p2==100){
                printf("\tCONGRATULATIONS to %s\nYou won\nbetter luck next time %s",pn2,pn1);
            }
            break;
        case 2:
            printf("Enter your name :-\n");
            scanf("%s",pn1);
            printf("the snakes are :-\n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d-->%d\n",sh[i],st[i]);
            }
            printf("the ladders are :-\n");
            for (int i = 0; i < 10; i++)
            {
                printf("%d-->%d\n",lt[i],lh[i]);
            }
            while(p1<101 && p2<101){
                int dice=0;
                dice=(rand() % 6)+1;
                printf("your turn\n");
                printf("press 1 to throw the dice\n");
                scanf("%d",&th);
                while (th!=1){
                    printf("that's not 1 !!!\nTRY AGAIN!!!\n");
                    scanf("%d",&th);
                }
                printf("You got a %d\n",dice);
                if((p1+dice)<101){
                    p1=p1+dice;
                }
                for (int i = 0; i < 10; i++)
                {
                    if(p1==sh[i]){
                        printf("You landed on a snake, now you'll be sent to %d\n",st[i]);
                        p1=st[i];
                    }
                    if(p1==lt[i]){
                        printf("You landed on a ladder, now you'll be sent to %d\n",lh[i]);
                        p1=lh[i];
                    }
                }
                
                printf("%s is at %d\n\n",pn1,p1);
                if(p1==100){
                    break;
                }

                dice=(rand() % 6)+1;
                printf("bot's turn\n");
                printf("bot got a %d\n",dice);
                if((p2+dice)<101){
                    p2=p2+dice;
                }
                for (int i = 0; i < 10; i++)
                {
                    if(p2==sh[i]){
                        printf("bot landed on a snake, now it'll be sent to %d\n",st[i]);
                        p2=st[i];
                    }
                    if(p2==lt[i]){
                        printf("bot landed on a ladder, now it'll be sent to %d\n",lh[i]);
                        p2=lh[i];
                    }
                } 
                printf("bot is at %d\n\n",p2);
                if(p2==100){
                    break;
                }
                printf("-------------------------------------------------\n");

            }
            if(p1==100){
                printf("\tCONGRATULATIONS to %s\nYou won\n",pn1);
            }
            if(p2==100){
                printf("\tbetter luck next time %s",pn1);
            }
            break;
    }
    return 0;
}