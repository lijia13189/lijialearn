#include<stdio.h>
#include<windows.h>
int menu(int x,int y)
{
	int n = x > y ? x: y;
	for (n; n <= x*y; n++)
		if (n%x == 0 && n%y == 0)
			break;
	return n;


}
int main()
{
	int a;
	int b;
	int c;
	puts("请输入两个数");
	scanf_s("%d%d",&a,&b);
	c=menu(a, b);
	printf("%d与%d最小公倍数为%d\n",a,b,c);
	system("pause");
	return 0;

}
