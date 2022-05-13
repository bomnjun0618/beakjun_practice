#include <stdio.h>

int main(void)
{
    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);
    if ((a == b) && (a == c) && (b == c))
        result = 10000 + (a * 1000);
    else if ((a != b) && (a != c) && (b != c))
    {
        if (a > b)
        {
            if (a > c)
                result = a  * 100;
            else
                result = c * 100;
        }
        else if(b > c)
            result = b * 100;
        else
            result = c * 100;
    }
    else
        if (((a == b) && (a != c)) || ((a != b) && (a == c)) || ((b == c) && (a != c)))
        {
            if (a == b || a == c)
                result = 1000 + (a * 100);
            else
                result = 1000 + (c * 100);
        }

    printf("%d", result);
    return (0);
}