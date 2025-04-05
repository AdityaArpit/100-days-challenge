#include<stdio.h>

int main(){
    int ar[3][3]={1,2,3,4,5,6,7,8,9};
    int sr1[3];
    int sr2[3];
    int sr3[3];
    printf("\t this is a code that transforms the given matrics inta a serpentacular form\n");
    printf("___________________________________________________________________________________________\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n\n");
    }
    //breaking into smaller arrays
    //array1
    for (int i = 0; i < 3; i++)
    {
        sr1[i]=ar[i][0];
    }
    //array2
    for (int i = 0; i < 3; i++)
    {
        sr2[i]=ar[i][1];
    }
    //array3
    for (int i = 0; i < 3; i++)
    {
        sr3[i]=ar[i][2];
    }
    //printing the arrays
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",sr1[i]);
    }
    for (int i = 2; i>-1 ; i--)
    {
        printf("%d ",sr2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",sr3[i]);
    }
    return 0;
}