import java.util.Scanner;

public class Codeforces_996A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int hundred;
        int twenty;
        int ten;
        int five;
        int one;

        hundred = n/100;
        n = n % 100;
        twenty = n/20;
        n = n % 20;
        ten = n/10;
        n = n % 10;
        five = n/5;
        n = n % 5;
        one = n;

        int ans = hundred + twenty + ten + five + one;

        System.out.println(ans);

    }
}
