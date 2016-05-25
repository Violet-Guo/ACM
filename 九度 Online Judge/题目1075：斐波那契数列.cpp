#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[500000];

void fibo(){
	num[0] = 0;
	num[1] = 1;
	for(int i = 2; i < 500000; i++)
		num[i] = num[i-1] + num[i-2];
}

int main()
{
	int n;
	fibo();
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i*2+1; j++){
				if(j)
					printf(" ");
				printf("%d", num[j]);
			}
			printf("\n");
		}
	}
	return 0;
}

