#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m)!=EOF){
		for(int i = 0; i < n; i++){
			if(i == 0){
				int j = 0;
				while(j < m){
					printf("%c", a[j++]);
				}
				printf("\n");
			}
			else{
				int k = i, j = 0, co = 0;
				while(k > 0 && co < m){
					printf("%c", a[k--]);
					co++;
				}
				while(j < m-i && co < m){
					printf("%c", a[j++]);
					co++;
				}
				printf("\n");
			}
			
		}
	}
	return 0;
}

