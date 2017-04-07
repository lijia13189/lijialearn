/*****************
这是一个求两个数之
间最大公因数和最小
公倍数的小程序
******************/
#include<stdio.h>
#include<windows.h>
int main()
{
	int num1;
	int num2;
	int c=0;
	int b=0;
	int k = 0;
	int h = 0;
	int y=0;
	printf("请输入两个数\n");
	scanf_s("%d%d",&num1,&num2);
	if (num1 < num2)
		c = num1;
	else
		c = num2;
	for (b = c; b >= 1; b--)
	{
		if (num1%b == 0 && num2%b == 0&&h==0)
		{ 
			k = 1;
			h = b;
		
		}
	}
	if (k == 0)
		printf("无最大公因数\n");
	else
		printf("最大公因数为%d\n",h);
	for (b = 1; b <= num1*num2; b++)
	{
		for (k = 1; k <= num1*num2; k++)
		{
			if (b*num1 == k*num2)
			{
				if (b > y&&y == 0)
					y = b*num1;
			}
		}
		
	}
	if (y > 0)
		printf("最小公倍数为%d", y);
	else
		printf("无最小公倍数\n");
	system("pause");
	return 0;
}