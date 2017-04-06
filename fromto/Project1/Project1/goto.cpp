#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
	
	unsigned int n, m;
	puts("请输入一个在42亿以内的数");
	scanf_s("%d",&n);
	printf("0x");
	int i = 7;
	while (i >=0)
	{
		m = (int)pow(16, i);
		m = n / m % 16;
		if (m <= 9)
			printf("%d", m);
		else if (m == 10)
			putchar('A');
		else if (m == 11)
			putchar('B');
		else if (m == 12)
			putchar('C');
		else if (m == 13)
			putchar('D');
		else if (m == 14)
			putchar('E');
		else if (m == 15)
			putchar('F');
		else
			puts("fuck you");
			--i;
	}
	system("pause");
}