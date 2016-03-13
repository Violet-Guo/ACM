#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}

int main()
{
	int t, n;
	int num1[10], num2[10];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &num1[i]);
			
		for(int i = 0; i < n; i++)
			scanf("%d", &num2[i]);
			
		sort(num1, num1+n);
		sort(num2, num2+n, cmp);
		
		int res = 0;
		
		for(int i = 0; i < n; i++)
			res += num1[i]*num2[i];
			
		printf("%d\n", res);
	}
	return 0;
}

