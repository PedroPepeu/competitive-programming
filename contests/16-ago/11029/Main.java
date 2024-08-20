import java.io.*;
import java.math.BigInteger;
import java.util.*;

class Main {

    void Problem(int a, int b) {
        BigInteger A, B;
        A = BigInteger.valueOf(a); // n
        // b == k
        BigInteger result = A.pow(b);
        String str = result.toString();

        for (int i = 0; i < 3; i++) {
            System.out.printf("%c", str.charAt(i));
        }
        System.out.printf("...");
        for (int i = str.length() - 3; i < str.length(); i++) {
            System.out.printf("%c", str.charAt(i));
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Main myWork = new Main();
        myWork.Begin();
    }

    void Begin() {
        int t, n, k;

        Scanner sc = new Scanner(System.in);

        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            k = sc.nextInt();

            Problem(n, k);

            t--;
        }
    }
}
