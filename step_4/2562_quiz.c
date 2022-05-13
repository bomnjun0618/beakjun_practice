#include <stdio.h>

//최대값

int main(void)
{
    int i, str[9], max, line;
    
    max = 0;
    line = 0;
    for(int i = 0; i <= 8; i++)
    {
        scanf("%d", &str[i]);
        if (str[i] > max)
        {
            max = str[i];
            line = i;
        }
    }
    printf("%d\n%d", max, line + 1);
}