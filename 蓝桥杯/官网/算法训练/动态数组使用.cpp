#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[5000];
	while(scanf("%d", &n)!=EOF){
		int sum = 0, a = 0, b;
		for(int i = 0; i < n; i++){
			scanf("%d", &b);
			sum+=b;
		}
		printf("%d %d\n", sum, sum/n);
	}
	return 0;
}

