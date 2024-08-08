import java.util.Scanner;
import java.math.BigInteger;

olhos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String a;
        String b;
        BigInteger I = BigInteger.valueOf("1");
        
        while(sc.hasNext()) {
            int counter = 0;
            a = sc.nextLine();
            b = sc.nextLine();

            BigInteger A, B;
            A = BigInteger.valueOf(a);
            B = BigInteger.valueOf(b);
            
            while(A.compareTo(B)<=0) {
                String current = A.toString();
                for(int i = 0; i < current.size(); i++) {
                    if(current[i] == "1") {
                        counter++;
                    }
                }
                A.add(I);
            }

            System.out.println(counter);
        }

        sc.clone();
    }
}