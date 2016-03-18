#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int fibo[20];

void f(){
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i < 20; i++){
		fibo[i] = fibo[i-1]+fibo[i-2];
	}
}

int main()
{
	f();
	int ans = 0;
	for(int i = 1; i <= 15; i++){
		ans+=fibo[i];
	}
	printf("%d %d %d\n", ans, fibo[11], (ans%fibo[11]%29));
	return 0;
}

