#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int ans[50000];

void fun(int n){
	int i, j, sum;
	for(i = 1; i <= n; i++){
		sum = 0;
		for(j = 1; j < i; j++){
			if(i%j == 0){
				sum+=j;
			}
		}
		if(sum == i){
			ans[i] = 1;
		}
	}
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int cnt = 0;
		fun(n);
		for(int i = 1; i <= n; i++){
			if(ans[i]){
				if(cnt)
					cout << " ";
				cnt++;
				cout << i;
			}
		} 
		
		cout << endl;
	}
	return 0;
}

