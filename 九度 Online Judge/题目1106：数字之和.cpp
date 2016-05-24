#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long long n, m;
	int ans1, ans2, r;
	while(scanf("%d", &n)!=EOF && n){
		ans1 = ans2 = 0;
		m = n;
		
		while(m){
			r = m%10;
			ans1+=r;
			m/=10;
		}
		
		m = n*n;
		
		while(m){
			r = m%10;
			ans2+=r;
			m/=10;
		}
		
		printf("%d %d\n", ans1, ans2);
	} 
	return 0;
}

