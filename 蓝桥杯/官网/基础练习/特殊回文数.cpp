#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int p = 10001;
		int a, b, c, d, e, f;
		while(p < 100000){
			a = p/10000;
			b = p%10000/1000;
			c = p%1000/100;
			d = p%100/10;
			e = p%10;
			if(a+b+c+d+e == n && a == e && b == d)
				printf("%d\n", p);
			p++;	
		}
		
		int q = 100001;
		while(q < 1000000){
			a = q/100000;
			b = q%100000/10000;
			c = q%10000/1000;
			d = q%1000/100;
			e = q%100/10;
			f = q%10;
			if(a+b+c+d+e+f == n && a == f && b == e && c == d)
				printf("%d\n", q);
			q++;
		}
	}
	return 0;
}

