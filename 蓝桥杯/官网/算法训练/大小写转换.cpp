#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[30];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str);
		
		for(int i = 0; i < len; i++){
			if('A'<=str[i] && str[i]<='Z'){
				str[i]+=32;
				continue;
			}
			if('a'<=str[i] && str[i]<='z')
				str[i]-=32;
		}
		
		printf("%s\n", str);
	}
	return 0;
}

