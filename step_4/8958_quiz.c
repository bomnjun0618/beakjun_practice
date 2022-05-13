#include <stdio.h>

void solution(char *str)
{
    int i = 0;
    int count = 0;
    int result = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'O')
        {
            count += 1;
            result += count;
        }
        else
            count = 0;
        i++;
    }
    printf("%d\n", result);
}


int main(void)
{
    int idx, i;
    char str[80];

    scanf("%d", &idx);
    i = 0;
    while(i < idx)
    {
        scanf("%s", str);
        solution(str);
        i++;
    }
    return (0);
}