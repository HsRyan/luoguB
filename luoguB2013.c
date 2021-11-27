#include<stdio.h>
int main()
{
	int F;//C 表示摄氏温度，F表示华氏温度
	scanf("%d", &F);
	printf("摄氏度C=%.5lf\n",(double)5 * (F - 32) / 9);
	return 0;
}
