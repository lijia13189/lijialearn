#include<stdio.h>
#include<windows.h>
int main()
{
	int a, b, c,e,f;
	f = 0;
	e = 0;
	printf("请输入两个5位数\n");
	scanf_s("%d%d",&a,&b);
	for (c = 5; c >0; c--)
	{
		e = a % 10 + b % 10+e;
		if (e > 9)
		
			f++;
			e = e / 10;//每次都要判断
		
		a  =a/10 ;
		b = b / 10;


	}
	printf("进位数为%d\n",f);
	system("pause");
}