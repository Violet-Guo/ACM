#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, ans;
	char str[5];
	while(scanf("%d %s", &a, str)!=EOF){
		int flag = 1;
		if(strcmp(str, "+")==0){
			scanf("%d", &b);
			ans = a+b;
		}
		else if(strcmp(str, "-")==0){
			scanf("%d", &b);
			ans = a-b;
		}
		else if(strcmp(str, "*")==0){
			scanf("%d", &b);
			ans = a*b;
		}
		else if(strcmp(str, "/")==0){
			scanf("%d", &b);
			if(b == 0){
				flag = 0;
			}
			else
				ans = a/b;
		}
		else if(strcmp(str, "!")==0){
			ans = 1;
			for(int i = a; i > 0; i--){
				ans*=i;
			}
		}
		else if(strcmp(str, "%")==0){
			scanf("%d", &b);
			if(b == 0){
				flag = 0;
			}
			else
				ans = a%b;
		}
		
		if(flag==0)
			printf("error\n");
		else
			printf("%d\n", ans);
	}
	return 0;
}

