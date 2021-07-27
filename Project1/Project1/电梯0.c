#include<stdio.h>
int main()
{
	int n = 0;//电梯所在层数 
	int m = 0;//电梯目标层数
	int a;//a层有人按上
	int A;//按上的人要去的层数
	int b;//b层有人按下
	int B;//按下的人要去的层数
	for (;;) {
		printf("哪层有人按电梯？\n");
		scanf("%d", &n);
		printf("电梯运行到%d层\n", n);
		printf("你想要去往几层？\n");
		scanf("%d", &m);                          
		if (m > n)
		{
			printf("电梯上升！\n");
			printf("哪层有人按上\n");
			scanf("%d", &a);
			if (a < m && a>n)
			{
				printf("电梯在%d层停\n", a);
				printf("你想要去往几层？\n");
				scanf("%d", &A);
				if (A > m)
				{
					printf("电梯在%d层停\n", m);
					printf("电梯在%d层停\n", A);
				}
				else if (A < m && A>a)
				{
					printf("电梯在%d层停\n", A);
					printf("电梯在%d层停\n", m);
				}
				else if (A = m)
					printf("电梯在%d层停\n", m);
			}
				else
				{
					printf("电梯到达%d层停\n前往%d层\n", m, a);
				}
		}
			if (m < n) {
				printf("电梯下降！\n");
				printf("哪层有人按下\n");
				scanf("%d", &b);
				if (b <n && b>m)
				{
					printf("电梯在%d层停\n", b);
					printf("你想要去往几层？\n");
					scanf("%d", &B);
					if (B > m)
					{
						printf("电梯在%d层停\n", B);
						printf("电梯在%d层停\n", m);
					}
					else if (B < m && B>b)
					{
						printf("电梯在%d层停\n", m);
						printf("电梯在%d层停\n", B);
					}
					else if (B=m)
						printf("电梯在%d层停\n", m);
				}
					else
					{
						printf("电梯到达%d层停\n前往%d层\n", m, b);
					}
			}
		}
	return 0;
}