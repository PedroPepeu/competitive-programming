import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String a;
        String b;
        BigInteger I = BigInteger.valueOf(1);
        
        
        while(sc.hasNext()) {
            int counter = 0;
            a = sc.next();
            b = sc.next();

            BigInteger A, B;
            A = new BigInteger(a);
            B = new BigInteger(b);
            
            while(A.compareTo(B)<=0) {
                String current = A.toString(2);
                for(int i = 0; i < current.length(); i++) {
                    if(current.charAt(i) == '1') {
                        counter++;
                    }
                }
                A = A.add(I);
            }

            System.out.println(counter);
        }

        sc.close();
    }   
}
