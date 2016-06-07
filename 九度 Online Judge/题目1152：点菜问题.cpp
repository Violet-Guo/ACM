#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int cc[5000], v[5000], dp[5000];

int main()
{
	int c, n;
	while(scanf("%d %d", &c, &n)!=EOF){
		for(int i = 0; i < n; i++){
			cin >> cc[i] >> v[i];
		}
		
		memset(dp, 0, sizeof(dp));
			
		for(int i = 0; i < n; i++){
			for(int j = c; j >= cc[i]; j--){
				if(dp[j] < dp[j-cc[i]]+v[i])
					dp[j] = dp[j-cc[i]]+v[i];
			}
		}
		
		cout << dp[c] << endl;
	}
	return 0;
}

