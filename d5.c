// program to calculate the determinant of a 3 x 3 matrix.

#include<stdio.h>

int main(){
    int n=3;
    int a[n][n],det=0,i,j,k,l;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element-[%d][%d]\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }    
    }
    printf("your matrix\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        det+=a[0][i]*((a[1][(i+1)%3]*a[2][(i+2)%3])-(a[1][(i+2)%3]*a[2][(i+1)%3]));
    }
    printf("The determinant is %d\n",det);
    return 0;
}