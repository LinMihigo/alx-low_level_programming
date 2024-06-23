#include <stdio.h>
/**
* main - entry point
*
* Description: print unique combos of two two-digit numbers
*
* Return: 0 (Success)
*/
int main(void)
{
    int w;
	int x;
    int y;
    int z;
	int i = 0;
    
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            int k = 0;
            while (k < 10)
            {
                int l = 0;
                while (l < 10)
                {
                    w = '0' + i;
                    x = '0' + j;
                    y = '0' + k;
                    z = '0' + l;

                    if (i != k || j != l)
                    {
                        if (i < k || (i == k && l > j))
                        {
                            putchar(w);
                            putchar(x);
                            putchar(' ');
                            putchar(y);
                            putchar(z);

                            if (i < 9 || j < 8 || k < 9 || l < 9)
                            {
                                putchar(',');
                                putchar(' ');
                            }
                        }
                    }
                    l++;
                }
                k++;
            }
            j++;
        }
        i++;
    }

	putchar('\n');

	return (0);
}
