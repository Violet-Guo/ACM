#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int y, m, d, ans, flag;
	while(scanf("%d %d %d", &y, &m, &d)!=EOF){
		flag = 0;
		if((y%4==0 && y%100!=0) || y%400==0)
			flag = 1;
		
		ans = 0;
		
		for(int i = 0; i < m-1; i++){
			ans+=month[i];
		}
		ans+=d;
		
		if(flag && m > 2)
			ans++;
		
		printf("%d\n", ans);
	}
	return 0;
}

