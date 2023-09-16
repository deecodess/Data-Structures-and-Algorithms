
public class main {
  public static int bannanacounter(int k , int n , int w)  {
    int sum = 0;
    for(int i = 1 ; i<=w ;i++){
        sum = sum + (i*k);
    }
    return sum-n;
  }
  public static void main(String[] args) {
    System.out.println(bannanacounter(3, 13, 4));
  }
}
