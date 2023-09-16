public class main {
    public static int subarray(int[] array) {
        int counter = 1;
        int[] rarray = new int[array.length];
        for (int i = 0; i < array.length - 1; i++) {
            if (array[i] < array[i + 1]) {
                for (int j = i; j < array.length - 1; j++) {
                    if (array[j] < array[j + 1]) {
                        counter++;
                    } else {
                        break;
                    }
                }
                System.out.println(counter + "c");
                rarray[i] = counter;
                counter = 1;
            }
        }
        int max = 1;
        for (int i = 0; i < rarray.length; i++) {
            if (rarray[i] > max) {
                max = rarray[i];
            }

        }
        return max;
    }
}