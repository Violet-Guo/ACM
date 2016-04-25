#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int fun(int m, int n){
	if(n == 1)
		return 1;
	if(m==1 || m==0)
		return 1;
	else if(m < 0)
		return 0;
	else
		return fun(m, n-1)+fun(m-n, n);
}

int main()
{
	int t, m, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &m, &n);
		printf("%d\n", fun(m, n));
	}
	return 0;
}

