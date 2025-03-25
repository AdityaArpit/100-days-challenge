// code for printing the tables in a given range

import java.util.*;

public class d2{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int up=0;
        int lo=0;
        // int i=0;
        System.out.println("\n\tTHIS PROGRAM PRINTS THE TABLE OF ALL THE NUMBERS BETWEEN THE RANGE YOU GIVE");
        System.out.println("Enter the lower limit");
        lo = sc.nextInt();
        System.out.println("Enter the upper limit");
        up = sc.nextInt();
        for(int i=lo;i<(up+1);i++){
            for(int j=1;j<11;j++ ){
                System.out.println(i+" x "+j+" = "+(i*j));
            }
            System.out.println();
        }
    }
}