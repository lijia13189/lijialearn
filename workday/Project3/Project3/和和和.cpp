#include<stdio.h>
#include<windows.h>
int main()
{
	int a, b, c, n,e;
	b = 1;
	c = 0;
	a = 1;
	e = 1;
	printf("������һ������\n");
	scanf_s("%d",&n);
	while ( a < n +1)
	{
		while (b <a+1)
		{
			e = e*b;
			b++;
		}
		c = c + e;
		b = 1;
		e = 1;
		a++;
	}
	printf("�׳˺���%d\n",c);
	system("pause");
}
