import java.io.IOException;
import java.util.Scanner;

/*
*Chef is going on a road trip and needs to apply for inter-district and inter-state travel e-passes. It takes A
 minutes to fill each inter-district e-pass application and B
 minutes for each inter-state e-pass application.

His journey is given to you as a binary string S
 of length N
 where 0
 denotes crossing from one district to another district (which needs an inter-district e-pass), and a 1
 denotes crossing from one state to another (which needs an inter-state e-pass).

Find the total time Chef has to spend on filling the various forms.*/




public class TravelPass {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while (test != 0) {
            int n = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            String str = sc.next();
            int count_zero = 0;
            int count_one = 0;

            for (int i = 0; i < str.length(); i++) {
                if (str.charAt(i) == '0') {
                    count_zero++;
                } else {
                    count_one++;
                }
            }
            int time = (count_zero * a) + (count_one * b);
            System.out.println(time);
            test--;

        }
    }
}
