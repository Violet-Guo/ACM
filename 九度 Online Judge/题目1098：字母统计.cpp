#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[30]; 
char str[50000];

int main()
{
	while(scanf("%s", str)!=EOF){
		memset(num, 0, sizeof(num));
		
		int len = strlen(str);
		
		for(int i = 0; i < len; i++){
			if(str[i]>='A' && str[i]<='Z'){
				num[str[i]-'A']++;
			}
		}
		
		for(int i = 0; i < 26; i++){
			printf("%c:%d\n", i+'A', num[i]);
		}
	}
	return 0;
}

