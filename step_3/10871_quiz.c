#include <stdio.h>

int main(void)
{
	int r,x;

	scanf("%d %d", &r, &x);
	for (int i = 1; i <= r; i++)
    {
		int d;
        scanf("%d ", &d);
		if (d < x)
			printf("%d ", d);
	}
	return 0;
}