#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t, n;
	long long a[1005];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		
		for(int i = 1; i <= n; i++)
			scanf("%lld", &a[i]);
		
		sort(a+1, a+n+1);
		
		long long maxn = -10000000;
		long long sum;

		sum = 0;
		for(int i = 1; i <= n/2; i++){
			sum = sum+a[n-i+1]-a[i];
		}	
		if(sum > maxn)
			maxn = sum;
		
		printf("%d\n", maxn);
	} 
	return 0;
}

