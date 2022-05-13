#include <stdio.h>

int main(void)
{
    int a, b, c, i, C, si, count;
    char str[10];
    char result[10];
    int resulti[10];

    scanf("%d %d %d", &a, &b, &c);
    if ((100 <= a && a <= 1000) && (100 <= b && b <= 1000) && (100 <= c && c <= 1000))
        i = a * b * c;
    sprintf(str, "%d", i);
    C = 0;
    while (C < 10)
    {
        result[C] = C + '0';
        si = 0;
        count = 0;
        while (str[si] != '\0')
        {
            if (str[si] == result[C])
                count++;
            si++;
        }
        result[C] = count + '0';
        C++;
    }
    for (int k = 0; k < 10; k++)
        resulti[k] = result[k] - '0';
    for (int i = 0; i < 10; i++)
        printf("%d\n", resulti[i]);
    return (0);
}