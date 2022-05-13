#include <stdio.h>

//사분면 고르기
int main(void)
{
	int x, y;

	scanf("%d\n", &x);
	scanf("%d\n", &y);
	if (0 <= x && 0 <= y)
		printf("1\n");
	else if (0 >= x && 0 <= y)
		printf("2\n");
	else if (0 >= x && 0 >= y)
		printf("3\n");
	else if (0 <= x && 0 >= y)
		printf("4\n");
	return 0;
}