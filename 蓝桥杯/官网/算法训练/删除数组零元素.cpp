#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[5500];

int CompactIntegers(int num[], int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(num[i]==0){
			for(int j = i+1; j < n; j++){
				if(num[j]!=0){
					num[i] = num[j];
					num[j] = 0;
					cnt++;
					break;
				}
			}
		}
		else{
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int n, cnt;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		cnt = CompactIntegers(num, n);
		
		printf("%d\n", cnt);
		if(cnt){
			for(int i = 0; i < cnt; i++){
				if(i)
					printf(" ");
				printf("%d", num[i]);
			}
			printf("\n");	
		}
		
	}
	return 0;
}

