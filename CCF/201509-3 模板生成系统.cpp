#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

map<string, string> mp;

char str[110][110];

int main()
{
	int n, m;
	char s[550];
	while(scanf("%d %d", &m, &n)!=EOF){
		getchar();
		
		for(int i = 0; i < m; i++)     
			gets(str[i]);
			
		mp.clear();
		
		char head[110], body[110];
		for(int i = 0; i < n; i++){
			gets(s);
			int len = strlen(s);
			int p = 0, p1 = 0, p2 = 0;
			
			while(' ' == s[p])
				p++;
				
			while(' ' != s[p])
				head[p1++] = s[p++];
			head[p1] = '\0';
			
			while(1){
				if(s[p++] == '\"')
					break;
			}
			
			while(s[p] != '\"')
				body[p2++] = s[p++];
			body[p2] = '\0';
			
			mp[head] = body;
		}
			
		for(int i = 0; i < m; i++){
			int len = strlen(str[i]);
			for(int j = 0; j < len; ){
				if(j+1 < len && '{' == str[i][j] && '{' == str[i][j+1]){
					j+=3;
					char c[110];
					int k = 0;
					while(str[i][j] != ' ')
						c[k++] = str[i][j++];
					c[k] = '\0';
					
					cout << mp[c];
					j+=3;
				}
				else{
					printf("%c", str[i][j++]);
				}
			}
			printf("\n");
		}
	}

	return 0;
}

