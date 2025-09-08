class Solution {
    public int[] getNoZeroIntegers(int n) {
        int num1 = n / 2;
        int num2 = n / 2;
        if (num1 + num2 != n) {
            num1++;
        }
        while (String.valueOf(num1).contains("0") || String.valueOf(num2).contains("0"))
        {
            num1++;
            num2--;
        }
        return new int[]{num1,num2};
    }
}
