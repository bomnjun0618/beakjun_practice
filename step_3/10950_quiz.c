#include <stdio.h>

int main(void) 
{
	int t, a, b;

	scanf("%d\n", &t);

	for (int i = 1; i <= t; i++)
    {
		scanf("%d %d\n", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}