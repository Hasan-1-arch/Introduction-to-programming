/*
Code Forces: K Max and Min
Given 3 numbers A, B and C, Print the minimum and the maximum numbers

Output:
Print the minimum number followed by a single space then print the maximum number.
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max, min;

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }

    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else if (c <= a && c <= b)
    {
        min = c;
    }

    printf("%d %d", min, max);
    return 0;
}