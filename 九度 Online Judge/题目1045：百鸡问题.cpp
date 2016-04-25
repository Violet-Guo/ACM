#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n/5; i++){
			for(int j = 0; j < n/3; j++){
				int k = 100 - i - j;
				int t;
				if(k%3 == 0){
					t = k/3;	
				}
				else{
					t = k/3+1;
				}
				if(i*5+j*3+t <= n){
					printf("x=%d,y=%d,z=%d\n", i, j, k);
				}
			}
		} 
	}
	return 0;
}

