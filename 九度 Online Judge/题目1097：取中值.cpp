#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num1[1000005], num2[1000005], ans[1000000];

int main()
{
	int t; 
	int n1, n2;
	int a, b, c, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n1, &n2);
		for(int i = 1; i <= n1; i++){
			scanf("%d", &num1[i]);
		}
		for(int i = 1; i <= n2; i++){
			scanf("%d", &num2[i]);
		}
		
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		int cnt = 1;
		for(int i = a; i<= b; i++){
			ans[cnt++] = num1[i];
		}
		for(int i = c; i <= d; i++){
			ans[cnt++] = num2[i];
		}
		
		cnt--;
		if(cnt%2==1){
			printf("%d\n", ans[cnt/2+1]);
		}
		else{
			printf("%d\n", ans[cnt/2]);
		}
	}
	return 0;
}

