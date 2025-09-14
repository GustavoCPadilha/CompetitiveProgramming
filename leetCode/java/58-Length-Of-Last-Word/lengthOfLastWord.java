class Solution {
    public static int lengthOfLastWord(String s) {
        String[] array = s.trim().split(" ");
        return array[array.length-1].length();
    }
}
