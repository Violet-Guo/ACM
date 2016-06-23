#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int ans[1000006];
int num[1000006];

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < 1000006; i++)
			ans[i] = 0;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &num[i]);
			ans[num[i]]++;
		}
		
		int a[2], cnt = 0;
		for(int i = 0; i < n; i++){
			if(ans[num[i]] == 1)
				a[cnt++] = num[i];
			if(cnt == 2)
				break;
		}
		
		if(a[0] > a[1])
			printf("%d %d\n", a[1], a[0]);
		else
			printf("%d %d\n", a[0], a[1]);
	}
	return 0;
}

