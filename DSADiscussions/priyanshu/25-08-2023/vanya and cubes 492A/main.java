public class main {
    public static int levell(int n) {
        int level = 0;
        int count = 0;
        while (count <= n) {
            level++;

            for (int i = 1; i <= level; i++) {
                count = count + i;
            }
        }
        if (count > n) {
            return level - 1;
        } else
            return level;
    }
}