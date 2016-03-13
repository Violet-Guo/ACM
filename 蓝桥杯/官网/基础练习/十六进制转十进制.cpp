#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	char num[10];
	while(scanf("%s", num)!=EOF){
		getchar();
		
		int len = strlen(num);
		long long res = 0, n = 1;
		
		for(int i = len-1; i>=0; i--){
			if(i < len-1)
				n*=16;
			if(isdigit(num[i])){
				res += n*(num[i]-'0');
			}
			else if(isalpha(num[i])){
				res += n*(num[i]-'A'+1+9);
			}
			
		}
		printf("%lld\n", res);
	}
	return 0;
}

