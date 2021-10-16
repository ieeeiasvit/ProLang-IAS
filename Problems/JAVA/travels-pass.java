import java.io.IOException;
import java.util.Scanner;

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
