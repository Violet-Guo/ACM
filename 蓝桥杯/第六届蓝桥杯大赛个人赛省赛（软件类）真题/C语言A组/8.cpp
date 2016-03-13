#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int cnt = n;
		while(n>=3){
			n-=2;
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}

