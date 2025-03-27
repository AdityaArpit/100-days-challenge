// program to convert currency from 1 unit to another

import java.util.*;
public class d4{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("\n\tTHIS IS A CURRENCY CONVERTER");
        System.out.println("--------------------------------------------");
        System.out.println("1. rupee to dollar");
        System.out.println("2. dollar to rupee");
        System.out.println("3. pak rupee to rupee");
        System.out.println("4. rupee to pak rupee");
        System.out.println("5. yen to rupee");
        System.out.println("6. rupee to yen");
        System.out.println("\nEnter your choice");
        int usr=sc.nextInt();
        System.out.println("Enter your amount");
        int amount=sc.nextInt();
        int result=1;
        switch(usr){
            case 1:
                result=amount*80;
                break;
            case 2:
                result=amount/80;
                break;
            case 3:
                result=amount*3;
                break;
            case 4:
                result=amount/3;
                break;
            case 5:
                result=amount*2;
                break;
            case 6:
                result=amount/2;
                break;
            default:
        }
        System.out.println("the result is "+result);
    }
}