import java.util.Scanner;

public class Codeforces_999A {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);

	int n = in.nextInt();
	int k = in.nextInt();

	int arr[];

	arr = new int[n];

	for (int i=0; i<n; i++){
        arr[i] = in.nextInt();
    }

    if (n==1){
	    if (k>=arr[0]){
            System.out.println(1);
        } else {
            System.out.println(0);
        }
        System.exit(0);
    }

    boolean tmp = false;

	int left = 0;
	int right = n-1;
	int ans = 0;

	while (!tmp){
	    if (k >= arr[left] && arr[left] != 0 && left < n-1){
	        arr[left] = 0;
	        ans++;
	        left++;
        } else if (k >= arr[right] && arr[right] != 0 && right > 0){
	        arr[right] = 0;
	        ans++;
	        right--;
        } else {
	        tmp = true;
        }
    }

        System.out.println(ans);


    }
}
