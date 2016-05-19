#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int ans = 0;
		if(n >= 0){
			for(int i = n; i <= 2*n; i++)
				ans+=i;
		}
		else{
			for(int i = 2*n; i <= n; i++)
				ans+=i;
		}
		printf("%d\n", ans);
	}
	return 0;
}

