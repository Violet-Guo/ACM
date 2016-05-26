#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<stack>
#include<cctype>
using namespace std;

stack<int> s;
char str[50000];

int main()
{
	int len, a, b, i;
	while(scanf("%s", str)!=EOF){
		len = strlen(str);
		a = str[0] - '0';
		i = 0;
		while(isdigit(str[i+1]) && i < len){
			i++;
			a = a*10+str[i]-'0';
		}
		s.push(a);
		
		i++;
		for(; i < len; i++){
			if(str[i]=='+'){
				a = str[++i] - '0';
				while(isdigit(str[i+1]) && i < len){
					i++;
					a = a*10+str[i]-'0';
				}
				s.push(a);
			}
			else if(str[i]=='-'){
				a = str[++i] - '0';
				while(isdigit(str[i+1]) && i < len){
					i++;
					a = a*10+str[i]-'0';
				}
				s.push(-a);
			}
			else if(str[i]=='*'){
				b = str[++i] - '0';
				while(isdigit(str[i+1]) && i < len){
					i++;
					b = b*10+str[i]-'0';
				}
				a = s.top();
				s.pop();
				s.push(a*b);
			}
			else if(str[i]=='/'){
				b = str[++i] - '0';
				while(isdigit(str[i+1]) && i < len){
					i++;
					b = b*10+str[i]-'0';
				}
				a = s.top();
				s.pop();
				s.push(a/b);
			}
		}
		
		int ans = 0;
		while(!s.empty()){
			ans += s.top();
			s.pop();
		}
		
		printf("%d\n", ans);
	}
	return 0;
}

