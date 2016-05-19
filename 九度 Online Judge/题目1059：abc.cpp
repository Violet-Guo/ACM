#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, m;
	for(int a = 0; a < 10; a++){
		for(int b = 0; b < 10; b++){
			for(int c = 0; c < 10; c++){
				n = a*100+b*10+c;
				m = b*100+c*10+c;
				if(n+m == 532)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}

