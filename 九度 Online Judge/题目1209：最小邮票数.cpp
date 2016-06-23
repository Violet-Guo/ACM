#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define MAXN 1000
using namespace std;

int dp[MAXN];
int s[MAXN];
int m, n;

void fun(){
	for(int i = 0; i < MAXN; i++)
		dp[i] = MAXN;
	
	dp[0] = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = m; j>=s[i]; j--){
			if(dp[j-s[i]]!=MAXN)
				dp[j] = min(dp[j], dp[j-s[i]]+1);
		}
	}
}


int main()
{
	while(scanf("%d %d", &m, &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &s[i]);
			
		fun();
		
		if(dp[m] == MAXN)
			dp[m] = 0;
		
		printf("%d\n", dp[m]);
	}
	return 0;
}

