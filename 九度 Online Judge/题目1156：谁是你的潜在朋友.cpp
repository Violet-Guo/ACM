#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int f[250];
int p[250];

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)!=EOF){
		memset(f, 0, sizeof(f));
		
		for(int i = 0; i < n; i++){
			scanf("%d", &p[i]);
			f[p[i]]++;
		}
		
		for(int i = 0; i < n; i++){
			if(f[p[i]]==1){
				printf("BeiJu\n");
			}
			else if(f[p[i]]>1){
				printf("%d\n", f[p[i]]-1);
			}
		}
	}
	return 0;
}

