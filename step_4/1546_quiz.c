#include <stdio.h>
#include <stdlib.h>

int check_max(int *tab, int idx)
{
    int i = 0;
    int max = tab[0];

    while (i < idx)
    {
        if (max < tab[i])
            max = tab[i];
        i++;        
    }
    return (max);
}

int main(void)
{
    int i, max, idx;
    double result = 0;
    int *tab;

    scanf("%d", &idx);
    tab = (int *)malloc(sizeof(int) * idx);
    i = 0;
    while (i < idx)
    {
        scanf("%d", &tab[i]);
        i++;
    }
    max = check_max(tab, idx);
    i = 0;
    while (i < idx)
    {
        result += (double)tab[i] / max * 100;
        i++;
    }
   printf("%.10f", result / idx);
    return (0);
}