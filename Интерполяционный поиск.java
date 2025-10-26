public class InterpolationSearch {
    public static int interpolationSearch(int[] arr, int lo, int hi, int x) {
        if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
            int pos = lo + (int)(((long)(hi - lo) * (x - arr[lo])) / (arr[hi] - arr[lo]));
            if (arr[pos] == x) return pos;
            if (arr[pos] < x) return interpolationSearch(arr, pos + 1, hi, x);
            if (arr[pos] > x) return interpolationSearch(arr, lo, pos - 1, x);
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80};
        System.out.println(java.util.Arrays.toString(arr));
        System.out.println(interpolationSearch(arr, 0, arr.length - 1, 50));
    }
}
