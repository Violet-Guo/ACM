#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[1010];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i ++)
			scanf("%d", &num[i]);
			
		sort(num, num+n);
		
		int res = 0;
		
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(1 == num[j]-num[i]){
					res++;
				}
				if(num[j]-num[i] > 1)
					break;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}

