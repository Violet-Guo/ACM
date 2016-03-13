#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		a = a*b/gcd(a, b);
		a = a*c/gcd(a, c);
		printf("%d\n", a);
	}
	return 0;
}

