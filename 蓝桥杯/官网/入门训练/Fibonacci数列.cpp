#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int f1, f2, res, n;
	while(scanf("%d", &n)!=EOF){
		f1 = f2 = 1;
		for(int i = 3; i <= n; i++){
			res = (f1+f2)%10007;
			f1 = f2;
			f2 = res;
		}
		printf("%d\n", res);
	}
	return 0;
}

