import java.util.Scanner;

public class Codeforces_1005A {

    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {

        int n = in.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++){
            arr[i] = in.nextInt();
        }

        int cnt = 1;
        int[] ans = new int[n];
        int tmp = 0;

        for (int i=1; i<n; i++){
            if (arr[i] == 1){
                cnt++;
                tmp++;
            } else {
                ans[tmp]++;
            }
        }

        System.out.println(cnt);
        for (int i=0; i<cnt; i++){
            System.out.print(ans[i]+1 + " ");
        }

    }
}
