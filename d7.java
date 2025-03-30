//                  *      *
//                  **    **
//                  ***  ***
//                  ********
//                  ********
//                  ***  ***
//                  **    **
//                  *      *


import java.util.*;
public class d7{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // System.out.print("enter the number : ");
        // int m = sc.nextInt();
        int n=9;
        
        for(int i = 1; i<n ; i++){
            for(int j = 1; j<n ; j++){
                if(i==j || i==n-j || j==1 || j==n-1 || ((i-j<n-2 && i-j>0) && i<(n-2) && j<n/2 ) || ((j-1<n-2 && j-i>0) && (i<(n-2) && i>2) && j>n/2) ){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}