#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[250];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str);
		
		for(int i = len-1; i>=0; i--)
			printf("%c", str[i]);
			
		printf("\n");
	}
	return 0;
}

