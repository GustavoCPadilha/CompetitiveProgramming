class Solution {
    final int i = 1;
    final int v = 5;
    final int x = 10;
    final int l = 50;
    final int c = 100;
    final int d = 500;
    final int m = 1000;

    public int romanToInt(String s) {
        char[] array = s.toLowerCase().toCharArray();
        int result = 0;
        for (int counter = 0; counter < array.length; counter++)
        {
            if (array[counter] == 'i')
            {
                if (counter + 1 >= array.length || array[counter + 1] != 'v' && array[counter + 1] != 'x')
                {
                    result += i;
                }
                else
                {
                    result -= i;
                }
            }
            else if (array[counter] == 'v')
            {
                result += v;
            }
            else if (array[counter] == 'x')
            {
                if (counter + 1 >= array.length || array[counter + 1] != 'l' && array[counter + 1] != 'c')
                {
                    result += x;
                }
                else
                {
                    result -= x;
                }
            }
            else if (array[counter] == 'l')
            {
                result += l;
            }
            else if (array[counter] == 'c')
            {
                if (counter + 1 >= array.length || array[counter + 1] != 'd' && array[counter + 1] != 'm')
                {
                    result += c;
                }
                else
                {
                    result -= c;
                }
            }
            else if (array[counter] == 'd')
            {
                result += d;
            }
            else if (array[counter] == 'm')
            {
                result += m;
            }
        }
        return result;
    }
}
