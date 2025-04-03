// Write a program in C to merge two arrays of the same size sorted in descending order.
// Test Data :
// Input the number of elements to be stored in the first array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Input the number of elements to be stored in the second array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Expected Output :
// The merged array in decending order is :
// 3 3 2 2 1 1

#include<stdio.h>

int main(){
    int n=0;
    int temp=0;
    int a[n];
    int b[n];
    printf("how many items you want in your array\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for element %d of 1st array:\n",i+1);
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("Enter value for element %d of 2nd array:\n",j+1);
        scanf("%d",&b[j]);
    }
    printf("So these are your arrays\na[]=");
    for (int k = 0; k < n; k++)
    {
        printf("%d ",a[k]);
    }
    printf("\nand\nb[]=");
    for (int l = 0; l < n; l++)
    {
        printf("%d ",b[l]);
    }
    printf("\nby appending, the final array becomes c[]=");
    int c[n*2];
    for (int m = 0; m < n; m++)
    {
        c[m]=a[m];
    }
    for (int o = n; o < n*2; o++)
    {
        c[o]=b[o-n];
    }
    for (int p = 0; p < n*2; p++)
    {
        printf("%d ",c[p]);
    }
    printf("\nThe final array in desending order is c[]=");
    for (int q = 0; q < 2*n; q++)
    {
        for (int r = 0; r < 2*n; r++)
        {
            if(c[r+1]>c[r]){
                temp=c[r+1];
                c[r+1]=c[r];
                c[r]=temp;

            }
        }
        
    }
    for (int s = 1; s < 2*n+1; s++)
    {
        printf("%d ",c[s]);
    }
    return 0;
}