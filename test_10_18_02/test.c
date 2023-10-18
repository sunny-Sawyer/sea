#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, s, area;
	scanf_s("%f,%f,%f",&a,&b,&c);
	s = (a + b + c) / 2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f\n",area);
	double p0, p1, y1, r;
	p0 = 1370536875;
	y1 = 2050 - 2010;
	r = 0.005;
	p1 = p0 * pow(1 + r, y1);
	printf("%lf\n",p1);
	double x, y, z, p, q, disc, x1, x2;
	scanf("%lf,%lf,%lf",&x,&y,&z);
	p = -y / (2 * x);
	disc = sqrt(y*y-4*x*z);
	q = disc / (2*x);
	x1 = p + q;
	x2 = p - q;
	printf("x1 = %lf\nx2 = %lf\n",x1,x2);

	return 0;
}