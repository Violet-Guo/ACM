#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int pri[800];

void prime(){
	for(int i = 0; i < 800; i++)
		pri[i] = 1;
		
	pri[0] = pri[1] = 0;
	for(int i = 2; i < 800; i++){
		for(int j = i*i; j < 800; j+=i){
			pri[j] = 0;
		}
	}
}

int main()
{
	prime();
	int n;
	while(scanf("%d", &n)!=EOF){
		if(n < 0)
			printf("no\n");
		else if(pri[n]==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}

