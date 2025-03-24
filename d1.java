import java.util.*;

public class d1{
    public static void main(String args[]){
        System.out.println("\n\tHELLO, THIS IS THE 100 DAYS CHALLENGE");
        System.out.println("This program plays with your mind a litle bit");
        Scanner sc = new Scanner(System.in);
        System.out.println("So, what's your name??");
        String name = sc.nextLine();
        System.out.println("hello "+name+", I want you to think of a 3 digit no. where the digits are in decending order.\nDone??");
        String done = sc.nextLine();
        System.out.println("now reverse the digits and subtract.\ndone??");
        String done1 = sc.nextLine();
        System.out.println("again reverse the current value and add.\ndone??");
        String done2 = sc.nextLine();
        System.out.println("So,"+name+" the value you're getting is ");
        String done3 = sc.nextLine();
        // int 
        System.out.println("Loading.... ");
        for(int i=0;i<5;i++){
            System.out.println(".");
        }
        System.out.println("1089");
    }
}