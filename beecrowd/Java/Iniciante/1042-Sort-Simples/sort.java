import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        
        int[] nums = {a, b, c};
        
        java.util.Arrays.sort(nums);
        
        for (int num : nums) {
            System.out.println(num);
        }
        
        System.out.println();
        
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
