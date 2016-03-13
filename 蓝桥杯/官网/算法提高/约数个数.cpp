#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	int ans;
	while(scanf("%d", &n)!=EOF){
		ans = 0;
		long long i = 1;
		while(i<=n){
			if(n%i==0){
				ans++;
			}
			i++;
		}
		
		cout<<ans<<endl;
	}
	return 0;
}

