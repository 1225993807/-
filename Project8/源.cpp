#include<stdio.h>
int main()
{
	int c1, c5, c10, c100;
	unsigned long a,tem,ans=0;
	printf("������1Ԫֽ����:\n");
	scanf("%d", &c1);
	printf("������5Ԫֽ������\n");
	scanf("%d", &c5);
	printf("������10Ԫֽ������\n");
	scanf("%d",& c10);
	printf("������100Ԫֽ������\n");
    scanf("%d", &c100);
	printf("�������\n");
	scanf("%d", &a);

	tem = (a / 100 < c100) ? a / 100 : c100;
	a = a - 100 * tem;
	ans = ans + tem;

	tem = (a / 10 < c10) ? a / 10 : c10;
	a = a - 10 * tem;
	ans = ans + tem;

	tem = (a / 5 < c5) ? a / 5 : c5;
	a = a - 5 * tem;
	ans = ans + tem;

	tem = (a / 1 < c1) ? a / 1 : c1;
	a = a - tem;
	ans = ans + tem;

	printf("����Ҫ%lu��", ans);
	getchar();

	return 0;


}