#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[10005];
	while(scanf("%d", &n)!=EOF){
		if(n==0)
			break;
			
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		sort(num, num+n);
		int ans;
		
		if(n%2==1){
			ans = num[n/2];	
		}
		else{
			ans = (num[n/2-1]+num[n/2])/2;
		}
		printf("%d\n", ans);
	}
	return 0;
}

