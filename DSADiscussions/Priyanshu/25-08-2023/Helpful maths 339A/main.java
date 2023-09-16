public class main{
    public static void newsum(String str){
        String[] nums = str.split("\\+");
        int[] array = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            array[i] = Integer.parseInt(nums[i]);
        }
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        for (int l = 0; l < array.length; l++) {
            System.out.print(array[l]);
            if (l < array.length - 1) {
                System.out.print("+");
            }
        }
    }
}