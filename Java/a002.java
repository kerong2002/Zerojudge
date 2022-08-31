import java.util.Scanner;
public class a002{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int x, y;
        while(cin.hasNext()) {
            x = cin.nextInt();
            y=  cin.nextInt();
            System.out.println(x+y);
        }
    }
}