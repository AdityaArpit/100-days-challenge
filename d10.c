    //wap to take any number of any length from the user and then display the 
    //addition or sub or mul or quotient of the digits at any place.The places
    //will be given by the user too


    #include<stdio.h>
    #include<math.h>
    int test()
    {
        printf("Hello\n");
        return 0;
    }
    
    int main(){
        
        test();
        int p1,p2;
        float sum,diff,pro,div;
        char ch;
        printf("\tATTENTION!!\nTHIS PROGRAM TAKES VALUE FROM THE USER AND PERFORMS BASIC OPERATIONS ON ANY TWO DIGIYS OF THE NUMBER WHICH IS ALSO GIVEN BY USER\n");
        printf("Enter the length of the number\n");
        int len = 0;
        scanf("%d",&len);
        printf("Now enter the number of that length\n");
        int num = 0;
        scanf("%d",&num);
        int c=0;
        int temp=num;
        while(temp!=0)
        {
            int d=temp%10;
            temp/=10;
            c++;
        }
        if(c!=len)
        {
            printf("Wrong input\n");
            return 0;
        }
        printf("Enter the first position::\n");
        scanf("%d",&p1);
        printf("Enter the second position::\n");
        scanf("%d",&p2);
        int d1=(int)(num/pow(10,p1-1))%10;
        int d2=(int)(num/pow(10,p2-1))%10;
        printf("d1 is %d and d2 is %d",d1,d2);
        printf("\nEnter + for addition\nEnter - for substraction\nEnter * for multiplication\n");
        printf("Enter / for quotient\nEnter %% for remainder\nEnter # for percent\n");
        scanf(" %c",&ch);
        switch(ch){
            case '+':
                printf("sum of %d and %d is %d\n",d1,d2,d1+d2);
                break;
            case '-':
                printf("difference of %d and %d is %d\n",d1,d2,d1-d2);
                break;
            case '*':
                printf("product of %d and %d is %d\n",d1,d2,d1*d2);
                break;
            case '/':
                printf("quorient of %d and %d is %d\n",d1,d2,d1/d2);
                break;
            case '%': 
                printf("remainder of %d and %d is %d\n",d1,d2,d1%d2);
                break;
            
        }
       
       
        return 0;
    }
    
    