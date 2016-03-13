#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	__int64 res, n;
	while(scanf("%d", &n)!=EOF){
		res = n*(n+1)/2;
		printf("%I64d\n", res);
	}
	return 0;
}

