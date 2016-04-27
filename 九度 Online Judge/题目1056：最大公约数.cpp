#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	if(a%b==0)
		return b;
	else
		return gcd(b, a%b); 
}

int main()
{
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
		printf("%d\n", gcd(a, b));
	}
	return 0;
}

