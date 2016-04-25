#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[2000];
	while(scanf("%s", str)!=EOF){
		getchar();
		
		char c = getchar();
		
		int len = strlen(str);
		
		for(int i = 0; i < len; i++){
			if(str[i] == c)
				continue;
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}

