#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[205];
	int num[205];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str);
		for(int i = 0; i < len; i++)
			num[i] = str[i];
		
		sort(num, num+len);
		
		for(int i = 0; i < len; i++)
			printf("%c", num[i]);
		printf("\n");
	}
	return 0;
}

