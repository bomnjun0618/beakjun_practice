#include <stdio.h>

//최소, 최대값

int main(void)
{
	int size, max, min, num;

	min = 0;
	max = 0;
	scanf("%d", &size);
	for (int i=0; i < size; i++)
	{
		scanf("%d", &num);
		if (i == 0)
		{
			min = num;
            max = num;
		}
		else
		{
            if(min > num)
                min = num;
            else if(max < num)
                max = num;
		}
	}
	printf("%d %d", min, max);

	return (0);
}