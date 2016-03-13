#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n = 100;
	while(n < 1000){
		int a, b, c;
		a = n/100;
		b = n%100/10;
		c = n%10;
		//printf("%d %d %d\n", a, b, c);
		
		if(a*a*a+b*b*b+c*c*c == n){
			printf("%d\n", n);
		}
		n++;
	}
	return 0;
}

