#include<stdio.h>
#include<windows.h>
int main()
{
	int n, m;
	puts("输入一个大于1的数");
	scanf_s("%d",&n);
	m = 2;
	while (m < n)
	{
		if (n%m == 0)
			break;
		else
			++m;
	}
	if (m == n)
		printf("%d是素数\n",n);
	else
		printf("%d不是素数\n",n);
	system("pause");
	return 0;
}