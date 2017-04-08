/*********************
求10000以内的n个素数
**********************/
#include<stdio.h>
#include<windows.h>
#include<math.h>
int sushu(int a)
{
	int b = 0;
	int c;
	int m = 0;
	float k = 0.0;
	k = a;
	c = sqrt(k) + 0.5;
	for (b = 2; b <= c; b++)
		if (a%b == 0)
			m = 1;
	if (m == 0)
		return a;
	else
		return 0;
}
int main()
{
	int g[10000];
	int a;
	int i = 0;
	int k = 0;
	int n = 0;
	printf("请输入需要几个素数，范围在10000以内\n");
	scanf_s("%d", &n);
	while (n <= 0)
	{
		printf("输入有误，请重新输入\n");
		scanf_s("%d", &n);
	}
	for (a = 2; a <= 10000; a++)
	{
		k = sushu(a);
		if (i < n&&k>0)
		{
			
			g[i] = k;
			i++;
		}
	}
	printf("前%d个素数为\n",n);
	for (i=0;i<n;i++)
	printf("%d\t",g[i]);
	system("pause");
	return 0;
}