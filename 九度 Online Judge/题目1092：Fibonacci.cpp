#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int fi[35];

void fibo(){
	fi[0] = 0;
	fi[1] = 1;
	for(int i = 2; i < 35; i++){
		fi[i] = fi[i-1] + fi[i-2];
	}
}

int main()
{
	fibo();
	int n;
	while(scanf("%d", &n)!=EOF){
		printf("%d\n", fi[n]);
	}
	return 0;
}

