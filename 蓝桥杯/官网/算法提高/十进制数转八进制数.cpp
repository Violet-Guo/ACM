#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long long num;
	while(scanf("%lld", &num)!=EOF){
		int ans[1000], len, r;
		
		len = r = 0;
		
		while(num){
			r = num%8;
			ans[len++] = r;
			num/=8;
		}
		if(num)
			ans[len++] = num;
		
		for(int i = len-1; i>=0; i--)
			printf("%d", ans[i]);
		printf("\n");
	}
	return 0;
}

