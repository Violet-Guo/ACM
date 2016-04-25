#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int m, ans[100000];
	long long a, b;
	while(scanf("%d", &m)!=EOF){
		if(m==0)
			break;
		
		cin >> a >> b;
			
		long long res = a+b;
		int r, len = 0;
		while(res){
			r = res%m;
			ans[len++] = r;
			res/=m;	
		}
		
		if(a+b == 0){
			cout << 0;
		}
		
		for(int i = len-1; i>=0; i--)
			printf("%d", ans[i]);
		printf("\n");
		
		
	}
	return 0;
}

