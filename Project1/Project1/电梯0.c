#include<stdio.h>
int main()
{
	int n = 0;//�������ڲ��� 
	int m = 0;//����Ŀ�����
	int a;//a�����˰���
	int A;//���ϵ���Ҫȥ�Ĳ���
	int b;//b�����˰���
	int B;//���µ���Ҫȥ�Ĳ���
	for (;;) {
		printf("�Ĳ����˰����ݣ�\n");
		scanf("%d", &n);
		printf("�������е�%d��\n", n);
		printf("����Ҫȥ�����㣿\n");
		scanf("%d", &m);                          
		if (m > n)
		{
			printf("����������\n");
			printf("�Ĳ����˰���\n");
			scanf("%d", &a);
			if (a < m && a>n)
			{
				printf("������%d��ͣ\n", a);
				printf("����Ҫȥ�����㣿\n");
				scanf("%d", &A);
				if (A > m)
				{
					printf("������%d��ͣ\n", m);
					printf("������%d��ͣ\n", A);
				}
				else if (A < m && A>a)
				{
					printf("������%d��ͣ\n", A);
					printf("������%d��ͣ\n", m);
				}
				else if (A = m)
					printf("������%d��ͣ\n", m);
			}
				else
				{
					printf("���ݵ���%d��ͣ\nǰ��%d��\n", m, a);
				}
		}
			if (m < n) {
				printf("�����½���\n");
				printf("�Ĳ����˰���\n");
				scanf("%d", &b);
				if (b <n && b>m)
				{
					printf("������%d��ͣ\n", b);
					printf("����Ҫȥ�����㣿\n");
					scanf("%d", &B);
					if (B > m)
					{
						printf("������%d��ͣ\n", B);
						printf("������%d��ͣ\n", m);
					}
					else if (B < m && B>b)
					{
						printf("������%d��ͣ\n", m);
						printf("������%d��ͣ\n", B);
					}
					else if (B=m)
						printf("������%d��ͣ\n", m);
				}
					else
					{
						printf("���ݵ���%d��ͣ\nǰ��%d��\n", m, b);
					}
			}
		}
	return 0;
}