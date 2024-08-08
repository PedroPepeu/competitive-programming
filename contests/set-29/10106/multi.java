import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()) {
            String v1 = sc.nextLine();
            String v2 = sc.nextLine();

            BigInteger V1 = new BigInteger(v1);
            BigInteger V2 = new BigInteger(v2);
            BigInteger ans = V1.multiply(V2);
            System.out.println(ans);
        }
    }
}
