#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n;
long long num[1000005];
long long dp[1000005];

int main()
{
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++){
			scanf("%lld", &num[i]);
			dp[i] = num[i];
		}
		
		for(int i = 1; i < n; i++){
			if(dp[i] < dp[i-1]+dp[i])
				dp[i] = dp[i-1]+dp[i];
		}
		
		long long ans = dp[0];
		
		for(int i = 1; i < n; i++){
			if(dp[i] > ans)
				ans = dp[i];
		}
		
		printf("%lld\n", ans);
	}
	return 0;
}

