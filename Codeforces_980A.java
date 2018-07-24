import java.util.Scanner;

public class Codeforces_980A {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        int links = 0;
        int pearls = 0;
        for (int i=0; i<str.length(); i++){
            if (str.charAt(i) == '-') {
                links++;
            } else if (str.charAt(i) == 'o'){
                pearls++;
            }
        }
        if (links == 0 || pearls == 0){
            System.out.println("YES");
        } else if (links % pearls == 0){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
