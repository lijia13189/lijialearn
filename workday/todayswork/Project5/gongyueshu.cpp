/*****************
����һ����������֮
�������������С
��������С����
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
	printf("������������\n");
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
		printf("���������\n");
	else
		printf("�������Ϊ%d\n",h);
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
		printf("��С������Ϊ%d", y);
	else
		printf("����С������\n");
	system("pause");
	return 0;
}