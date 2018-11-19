import java.util.Scanner;

public class Problem1030A{
    public static void main (String args[]){
        Scanner scanner = new Scanner(System.in);
        
        int n = Integer.parseInt(scanner.nextLine());
        
        int[] arr = new int[n];
        
        int x;
        
        for (int i=0; i<n; i++){
            arr[i] = scanner.nextInt();
        }
        
        String ans = "EASY";
        for (int i=0; i<n; i++){
            if (arr[i] == 1){
                ans = "HARD";
                break;
            }
        }
        
        System.out.println(ans);
    }
}