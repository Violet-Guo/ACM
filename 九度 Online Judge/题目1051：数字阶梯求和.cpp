#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long long a, n;
	while(scanf("%lld %lld", &a, &n)!=EOF){
		int cnt = 0, ans = 0;
		for(int i = 0; i < n; i++){
			cnt = cnt*10 + a;
			ans += cnt; 
		}
		
		cout  << ans << endl;
	}
	return 0;
}

