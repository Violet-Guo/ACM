#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int ans[500][500];

void yanghui(){
	ans[0][0] = 1;
	ans[0][1] = 1;
	for(int i = 1; i < 500; i++){
		for(int j = 0; j <= i+1; j++){
			if(j == 0){
				ans[i][j] = 1;
			}
			else if(j == i+1){
				ans[i][j] = 1;
			}
			else{
				ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
			}
		}
	}
}

int main()
{
	yanghui();
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n-1; i++){
			for(int j = 0; j <= i+1; j++){
				if(j)
					printf(" ");
				printf("%d", ans[i][j]);
			}
			
			printf("\n");
		}
	}
	return 0;
}

