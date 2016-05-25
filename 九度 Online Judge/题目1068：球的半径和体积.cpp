#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	double x0, y0, z0, x1, y1, z1;
	while(scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &z0, &x1, &y1, &z1)!=EOF){
		double r = sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
		double are = 4.0/3.0*acos(-1)*r*r*r;
		
		printf("%.3lf %.3lf\n", r, are);
	}
	return 0;
}

