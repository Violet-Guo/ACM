#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long n;
	while(scanf("%ld", &n)!=EOF){
		int sum = 0;
		while(n){
			sum+=n%10;
			n/=10;
		}
		printf("%d\n", sum);
	} 
	return 0;
}

