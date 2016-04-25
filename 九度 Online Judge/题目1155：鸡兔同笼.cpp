#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, a;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		
		int t1 = a/2;
		int t2 = a/4;
		int maxn = 0, minn = 0;
		for(int i = 0; i <= t1; i++){
			for(int j = 0; j <= t2; j++){
				if(i*2+j*4==a){
					if(minn==0)
						minn = i+j;
					if(i+j>maxn)
						maxn = i+j;
					if(i+j<minn)
						minn = i+j;
				}
			}
		}
		
		printf("%d %d\n", minn, maxn);
	}
	return 0;
}

