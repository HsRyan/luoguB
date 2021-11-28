#include<stdio.h>
int main()
{
	int r;
	double pi = 3.14159,d,c,s;
	scanf_s("%d", &r);
	d = 2 * r;
	c = pi * d;
	s = pi * r * r;
	printf("%.4lf\t%.4lf\t%.4lf\t\n",(double) d, (double)c,(double) s);
	return 0;
}