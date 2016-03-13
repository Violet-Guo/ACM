#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[10];

int main()
{
	
	for(int i = 20; i < 100; i++){
		memset(num, 0, sizeof(num));
		int a = i*i;
		int b = i*i*i;
		while(a){
			num[a%10]++;
			a/=10;
		}
		while(b){
			num[b%10]++;
			b/=10;
		}
		int cnt = 0, flag = 1;
		while(cnt < 10){
			if(num[cnt]==0 || num[cnt]>1){
				flag = 0;
				break;
			}
			cnt++;
		}
		if(flag){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}

