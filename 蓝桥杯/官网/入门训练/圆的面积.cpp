#include<cstdio>
#include<cstring>
#include<algorithm>
#define PI 3.14159265358979323
using namespace std;

int main()
{
	int r;
	double res;
	while(scanf("%d", &r)!=EOF){
		res = PI*r*r;
		printf("%.7lf\n", res);
	}
	return 0;
}

