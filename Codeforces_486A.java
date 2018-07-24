import java.util.Scanner;

public class Codeforces_486A {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        long n = scanner.nextLong();

        if (n%2 == 0){
            System.out.println(n/2);
        } else {
            System.out.println((n-1)/2 - n);
        }

    }
}
