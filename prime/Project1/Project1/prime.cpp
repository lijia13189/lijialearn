#include<stdio.h>
#include<windows.h>
int main()
{
	int n, m;
	puts("����һ������1����");
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
		printf("%d������\n",n);
	else
		printf("%d��������\n",n);
	system("pause");
	return 0;
}