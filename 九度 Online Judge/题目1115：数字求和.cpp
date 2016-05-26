#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, sum, a;
	while(scanf("%d", &a)!=EOF){
		sum = 0;
		for(int i = 0 ; i < 5; i++){
			scanf("%d", &n);
			if(n < a)
				sum+=n;
		}
		printf("%d\n", sum);
	} 
	return 0;
}

