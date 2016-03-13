#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

int num[100010];

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		getchar();
		memset(num, 0, sizeof(num));
		
		char str[100010];
		while(n--){
			gets(str);
			int len = strlen(str);
			
			long long a = 0;
			for(int i = 0; i < len; i++){
				if(isdigit(str[i])){
					a = a*10+str[i]-'0';
				}
				else if(str[i] == ' '){
					num[a]++;
					a = 0;
				}
			}
			num[a]++;
		}
		
		int i;
		for(i = 1; num[i]==0; i++);
		
		long long b = 0, c = 0;
		for(; i < 100010; i++){
			if(num[i] == 0){
				b = i;
			}
			if(num[i] == 2){
				c = i;
			}
			if(b && c){
				printf("%d %d\n", b, c);
				break;
			}
				
		}
	}
	return 0;
}

