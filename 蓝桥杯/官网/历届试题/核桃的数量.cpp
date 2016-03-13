#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		int maxn = a;
		if(b > maxn)	maxn = b;
		if(c > maxn)	maxn = c;
		
		while(1){
			if(maxn%a==0 && maxn%b==0 && maxn%c==0){
				printf("%d\n", maxn);
				break;
			}
			maxn++;
		}
	}
	return 0;
}

