#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		long long ans = 1;
		for(int i = 2; i <= n; i++){
			ans*=i;
		}
		
		printf("%lld\n", ans);
	}
	return 0;
}

