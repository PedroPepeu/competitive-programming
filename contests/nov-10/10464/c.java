import java.util.Scanner;
import java.math.BigDecimal;

class Main {
    public static void main(String[] args) {
        boolean ch = true;
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t > 0) {
            if(ch) {
                String bff = sc.nextLine();
                ch = false;
            }
            String in = sc.nextLine();
            String[] parts = in.split(" ");

            StringBuilder strblr = new StringBuilder();

            BigDecimal bg1 = new BigDecimal(parts[0]);
            BigDecimal bg2 = new BigDecimal(parts[1]);
            
            bg1 = bg1.add(bg2);
            String ans = bg1.toString();
            char cn = '0';
            boolean normal = false;
            for(int i = ans.length()-1; i >= 0; i--) {
                char c = ans.charAt(i);
                if(i-1 > 0) {
                    cn = ans.charAt(i-1);
                }
                if(c == '.' || c != '0' || normal || cn == '.') {
                    normal = true;
                    strblr.append(c);
                    continue;
                }
                if(c == '0' && !normal) {
                    continue;
                }
            }
            strblr.reverse();
            System.out.println(strblr);
            t--;
        }
    }
}
