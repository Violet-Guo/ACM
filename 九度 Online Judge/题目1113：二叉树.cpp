#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

ll n, m;
ll ans;
ll leftt, rightt, deep_n, deep_m, deep_diff;


int main()
{
	while(scanf("%lld %lld", &m, &n)!=EOF){
		if(m==0 && n==0)
			break;
		
		ans = 0;
		
		leftt = rightt = m;
		
		deep_n = (int)(log(n)/log(2)+1);
		deep_m = (int)(log(m)/log(2)+1);
		
		deep_diff = deep_n - deep_m;
		
		ans = ans + (int)pow(2, deep_diff)-1;
		
		for(ll i = 1; i <= deep_diff; i++){
			leftt = leftt*2;
			rightt = rightt*2+1;
		}
		
		if(rightt <= n)
			ans = ans + rightt - leftt + 1;
		else if(leftt <= n)
			ans = ans + n - leftt + 1;
		
		
		printf("%lld\n", ans);
	}
	return 0;
}

