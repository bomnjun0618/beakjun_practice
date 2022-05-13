#include <stdio.h>

int check_str(int *str, int i)
{
    int si;

    si = 0;
    while (si < i)
    {
        if (str[si] == str[i])
            return (1);
        else
            si++;
    }
    return (0);
}

int main(void)
{
    int i, count;
    int str[11];

    i = 0;
    while (i < 10)
    {
        scanf("%d", &str[i]);
        i++;
    }
    i = 0;
    while (i < 10)
    {
        str[i] = str[i] % 42;
        i++;
    }
    count = 0;
    i = 0;
    while (i < 10)
    {
        if (check_str(str, i) == 1)
            i++;
        else
        {
            count++;
            i++;
        }
    }
    printf("%d", count);
    return (0);
}