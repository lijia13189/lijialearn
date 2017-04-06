#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
	int a, b, c, d;
	printf("«Î ‰»Îa,b,c\n");
		scanf_s("%d%d%d",&a,&b,&c);
		if (b > a)
		{
			d = a;
			a = b;
			b = d;
		}
		if (c > a)
		{
			d = a;
			a = c;
			c = d;

		}
		if (c> b)
		{
			d = b;
			b = c;
			c = d; 
		}
		printf("À≥–Ú «%d %d %d \n",a,b,c);
		printf("%f", clock() / CLOCKS_PER_SEC);
		system("pause");
		

}