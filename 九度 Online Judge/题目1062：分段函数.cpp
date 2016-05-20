#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	double n, ans;
	while(scanf("%lf", &n)!=EOF){
		ans = 0;
		if(n>=0.0 && n < 2.0){
			ans = -n + 2.5;
		}
		else if(n>=2.0 && n<4.0){
			ans = 2-1.5*(n-3)*(n-3);
		}
		else if(n>=4.0 && n<6.0){
			ans = n/2-1.5;
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}

