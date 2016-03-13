#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int pri[100010];

bool isprime(int a){
	for(int i = 2; i < a; i++){
		if(a%i == 0)
			return false;
	}
	return true;
}

void prime(){
	for(int i = 0; i < 100010; i++)
		pri[i] = 1;
	
	int t = sqrt(100010);
	
	for(int i = 2; i <= t; i++){
		if(!isprime(i))
			pri[i] = 0;
		for(int j = i*2; j <= 100010; j+=i)
			pri[j] = 0;
	}
}

int main()
{
	
	prime();
	
	int n;
	while(scanf("%d", &n)!=EOF){
		int cnt = 0, res = 1;
		for(int i = 2; i < 100010; i++){
			if(pri[i] == 1){
				cnt++;
			//	printf("%d ", i);
				res = (res*i)%50000;
			}
			if(cnt == n)
				break;
			
		}
		printf("%d\n", res);
	}
	return 0;
}

