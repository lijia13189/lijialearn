#include<stdio.h>
int fuck(int *a, int *b, int *c)
{
	int t;
	int i = 0;
	int y = 0;
	int *k[3];
	int p = 0;
	k[0] = a;
	k[1] = b;
	k[2] = c;
	for (y; y<3; y++)
		for (i; i<3 - 1 - y; i++)
			if (*k[i] < *k[i + 1])
			{
				t = *k[i + 1];
				*k[i + 1] = *k[i];
				*k[i] = t;
			}

	return 0;

}

int main()
{
	int a;
	int b;
	int c;
	int *l = &a;
	int *l1 = &b;
	int *l2 = &c;
	printf("请输入三个数\n");
	scanf_s("%d%d%d",&a,&b,&c);
	fuck(l, l1,l2);
	printf("排序为：%d%d%d",a,b,c);
	return 0;
}
