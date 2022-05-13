#include <stdio.h>
#include <stdlib.h>

void solution(int i, int *str)
{
    int total, k, count;
    double result;

    k = 0;
    total = 0;
    while (k < i)
    {
        total += str[k];
        k++;
    }
    
    total /= i;
    count = 0;
    k = 0;
    while (k < i)
    {
        if (str[k] > total)
            count++;
        k++;
    }
    result = (100 / (double)i) * count;
    printf("%.3f%%\n", result);
}

int main(void)
{
    int i, k, idx, kids;
    int *str;

    scanf("%d", &idx);
    i = 0;
    while(i < idx)
    {
        k = 0;
        scanf("%d", &kids);
        str = (int *)malloc(sizeof(int) * kids);
        
        while (k < kids)
        {
            scanf("%d", &str[k]);
            k++;
        }
        solution(kids, str);
        i++;
    }
}