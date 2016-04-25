#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	long long a, maxn, minn;
	while(scanf("%d", &n)!=EOF){
		
		scanf("%lld", &a);
		maxn = minn = a;
		
		for(int i = 1; i < n; i++){
			scanf("%lld", &a);
			if(a > maxn)
				maxn = a;
			if(a < minn)
				minn = a;
		}
		printf("%lld %lld\n", maxn, minn);
	}
	return 0;
}

