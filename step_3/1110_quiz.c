#include <stdio.h>

int main(void)
{
	int f, b, c, d, inp, result,count;

	scanf("%d", &inp);
	count = 0;
	result = inp;
	while (1){
		f = result / 10;
		b = result % 10;
		c = (f + b) % 10;
		d= (b * 10) + c;
		result = d;
		count++;
		if (inp == d){
			break;
		}
	}
	printf("%d", count);

	return 0;
}