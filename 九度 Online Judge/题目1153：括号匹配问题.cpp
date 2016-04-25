#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;

char str[150];
int f[150];
stack<int> s;

int main()
{
	while(scanf("%s", str)!=EOF){
		//gets(str);
		int len = strlen(str);
		memset(f, 0, sizeof(str));
		
		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(str[i]=='('){
				s.push(i);
			}
			else if(str[i]==')'){
				if(s.empty()){
					f[i] = 2;
					continue;
				}
				else{
					s.pop();
				}
			}
		}
		
		while(!s.empty()){
			int t = s.top();
			f[t] = 1;
			s.pop();
		}
		
		puts(str);
		for(int i = 0; i < len; i++){
			switch(f[i]){
				case 0:
					printf(" ");
					break;
				case 1:
					printf("$");
					break;
				case 2:
					printf("?");
					break;
			}
		}
		printf("\n");
	} 
	return 0;
}

