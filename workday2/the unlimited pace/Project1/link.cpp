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
	puts("�������ܹ�����");
	scanf_s("%d", &g);

	int p = 0;
	while (p < g)
	{
		printf("����������\n");
		scanf_s("%s", k[p].name, sizeof(k[p].name));
		printf("������ѧ�ź���λ\n");
		scanf_s("%d", &k[p].num1);
		printf("������ɼ�\n");
		scanf_s("%d", &k[p].gred);
		++p;
	}
	return g;
}
void menu()
{
	printf("1.������Ϣ\n");
	printf("2.�����Ϣ\n");
	printf("3.��ѯ��Ϣ\n");
	printf("4.�˳�\n");
}
void see(int *y)
{
	int a = 0;
	for (a = 0; a<*y; a++)
		printf("������%s\tѧ�ţ�%d\t�ɼ���%d\n", k[a].name, k[a].num1, k[a].gred);
}
void find()
{
	int bo;
	int acim;
	puts("��������Ҫ��ѯ��ѧ��");
	scanf_s("%d",&acim);
	for (bo = 0; bo < 5; bo++)
		if (acim == k[bo].num1)
		{
			printf("������%s\tѧ�ţ�%d\t�ɼ���%d\n", k[bo].name, k[bo].num1, k[bo].gred);
			break;
		}
		else if (bo == 4)
		{
			puts("�������ѧ����������������");
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
		puts("���������");
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
