#include<stdio.h>
#include<windows.h>
int main()
{
	int a, b, c,e,f;
	f = 0;
	e = 0;
	printf("����������5λ��\n");
	scanf_s("%d%d",&a,&b);
	for (c = 5; c >0; c--)
	{
		e = a % 10 + b % 10+e;
		if (e > 9)
		
			f++;
			e = e / 10;//ÿ�ζ�Ҫ�ж�
		
		a  =a/10 ;
		b = b / 10;


	}
	printf("��λ��Ϊ%d\n",f);
	system("pause");
}