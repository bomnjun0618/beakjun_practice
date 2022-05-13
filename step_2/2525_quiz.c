#include <stdio.h>

int    main(void)
{
    int    h, m, q, temp;
    
    scanf("%d %d", &h, &m);
    scanf("%d", &q);
    
    temp = m + q;
    if (temp >= 60)
    {
        h = h + (temp / 60);
        m = temp % 60;
    }
    if (temp < 60)
        m += q;
    if (h >= 24)
        h -= 24;
    printf("%d %d", h, m);
    return (0);
}