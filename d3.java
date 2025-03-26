// program to play rock paper scissors

import java.util.*;
public class d3{
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        int score=0;
        int a;
        // int a = (int)(Math.random()*3)+1;
        // System.out.println(a);
        System.out.println("\n\tREADY TO PLAY ROCK PAPPER SCISSORS?😁");
        System.out.println("1. ROCK");
        System.out.println("2. PAPER");
        System.out.println("3. SCISSORS");
        // System.out.println("0. EXIT");
        while(1==1){
            a = (int)(Math.random()*3)+1;
            System.out.println("\n\tENTER YOUR CHOICE");
            int ch = sc.nextInt();
            if((ch==1 && a==1)||(ch==2 && a==2)||(ch==3 && a==3)){
                System.out.println("bot has thrown "+a);
                System.out.println("\n\tIT'S A TIE");
            }
            else if((ch==1 && a==3)||(ch==2 && a==1)||(ch==3 && a==2)){
                System.out.println("bot has thrown "+a);
                System.out.println("\n\tYOU WIN");
                score++;
            }
            else{
                System.out.println("bot has thrown "+a);
                System.out.println("YOU LOSE!!🤣🤣");
            }
        }
        // System.out.println("your score is "+ score);
    }
}