#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

char str[100005];
char num[100005];

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		getchar(); 
		if(0 == n)
			break;
			
		gets(str);
		int i, len = 0;
		
		for(i = 0; i < n; ){
			if(isalpha(str[i])){
				num[len++] = str[i++];
			}
			else{
				for(int j = len-1; j>=0; j--){
					printf("%c", num[j]);
				}
				printf(" ");
				len = 0;
				while(str[i]==' ')
					i++;
			}
		}
		if(len > 0){
			for(i = len-1; i>=0; i--)
				printf("%c", num[i]);
		}
		printf("\n");
	}
	return 0;
}

