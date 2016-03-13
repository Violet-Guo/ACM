#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int vis[3000];
	char str[20];
	while(scanf("%d", &n)!=EOF){
		getchar();
		
		memset(vis, 0, sizeof(vis));
		
		while(n--){
			gets(str);
			if(str[0]=='N'){
				int i = 1;
				while(1){
					if(vis[i]==0){
						printf("%d\n", i);
						vis[i] = 1;
						break;
					}
					i++;
				}
			}
			else if(str[0]=='D'){
				int j = str[7]-'0';
				int k = 8;
				while(isdigit(str[k])){
					j = j*10+str[k]-'0';
					k++;
				}
				//printf("%d\n", j);
				if(vis[j]==1){
					vis[j]=0;
					printf("Successful\n");
				}
				else{
					printf("Failed\n");
				}
			}
		}
	}
	return 0;
}

