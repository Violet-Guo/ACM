#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, big, small, sum, a;
	while(scanf("%d", &n)!=EOF){
		scanf("%d", &a);
		small = big = sum = a;
		for(int i = 1; i < n; i++){
			scanf("%d", &a);
			if(small > a)
				small = a;
			if(big < a)
				big = a;
			sum+=a;
		}
		printf("%d\n%d\n%d\n", big, small, sum);
	}
	return 0;
}

