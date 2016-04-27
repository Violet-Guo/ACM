#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[25];
	while(scanf("%d", &n)!=EOF){
		int im, ia, minn, maxn;
		
		scanf("%d", &num[0]);
		
		minn = maxn = num[0];
		im = ia = 0;
		
		for(int i = 1; i < n; i++){
			
			scanf("%d", &num[i]);
			if(minn > num[i]){
				minn = num[i];
				im = i;
			} 
			if(maxn < num[i]){
				maxn = num[i];
				ia = i;
			}
		}
		
		int t = maxn;
		num[ia] = num[im];
		num[im] = t;
		
		for(int i = 0; i < n; i++){
			if(i)
				printf(" ");
			printf("%d", num[i]);
		}
		printf("\n");
	}
	return 0;
}

