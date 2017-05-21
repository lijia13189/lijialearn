#include<stdio.h>
struct fuser
{
	char name[20];
	int num1;
	int gred;

};
fuser k[100];
int input()
{
	
	int g;
	puts("请输入总共人数");
	scanf_s("%d", &g);

	int p = 0;
	while (p < g)
	{
		printf("请输入姓名\n");
		scanf_s("%s", k[p].name, sizeof(k[p].name));
		printf("请输入学号后四位\n");
		scanf_s("%d", &k[p].num1);
		printf("请输入成绩\n");
		scanf_s("%d", &k[p].gred);
		++p;
	}
	return g;
}
void menu()
{
	printf("1.输入信息\n");
	printf("2.浏览信息\n");
	printf("3.查询信息\n");
	printf("4.退出\n");
}
void see(int *y)
{
	int a = 0;
	for (a = 0; a<*y; a++)
		printf("姓名：%s\t学号：%d\t成绩：%d\n", k[a].name, k[a].num1, k[a].gred);
}
void find()
{
	int bo;
	int acim;
	puts("请输入你要查询的学号");
	scanf_s("%d",&acim);
	for (bo = 0; bo < 5; bo++)
		if (acim == k[bo].num1)
		{
			printf("姓名：%s\t学号：%d\t成绩：%d\n", k[bo].name, k[bo].num1, k[bo].gred);
			break;
		}
		else if (bo == 4)
		{
			puts("您输入的学号有误请重新输入");
			find();
		}
}
int main()
{
	int t=0;
	int sum;
	int *y;
	y = &sum;
	while (t != -1)
	{
		menu();
		puts("请输入序号");
		scanf_s("%d", &t);
		switch (t)
		{
		case 1:sum=input();
			break;
		case 2:see(y);
			break;
		case 3:find(); break;
		case 4:t = -1;
		}
	}
	return 0;
}
