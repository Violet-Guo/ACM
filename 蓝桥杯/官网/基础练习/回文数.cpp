#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, a, b, c, d;
	n = 1001;
	while(n < 10000){
		a = n/1000;
		b = n%1000/100;
		c = n%100/10;
		d = n%10;
		//printf("%d %d %d %d\n", a, b, c, d);
		if(a == d && b == c){
			printf("%d\n", n);
		}
		n++;
	}
	return 0;
}

