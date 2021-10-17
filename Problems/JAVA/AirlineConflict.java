import java.util.Scanner;

/*
*Chef has 3
 bags that she wants to take on a flight. They weigh A
, B
, and C
 kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D
 kgs and the weight of the bag which is carried cannot exceed E
 kgs. Find if Chef can take all the three bags on the flight*/


 class AirlineProblem {
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int test=sc.nextInt();
         while(test!=0){
             int A=sc.nextInt();
             int B=sc.nextInt();

             int C=sc.nextInt();

             int D=sc.nextInt();

             int E=sc.nextInt();

             int max=Math.max(Math.max(A,C),B);
             int min=Math.min(Math.min(A,B),C);

             int thirdno=A+B+C-(max+min);

             if(min<=E && max+thirdno<=D || max+min<=D && thirdno<=E || min+thirdno<=D && max<=E){
                 System.out.println("YES");
             } else {
                 System.out.println("NO");
             }
             test--;
         }
     }
