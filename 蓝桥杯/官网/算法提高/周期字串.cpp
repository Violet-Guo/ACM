#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string str, ans, s1, s2;
	int cnt;
	while(cin >> str){
		int len = str.length();
		ans = str;
		cnt = len;
		
		for(int i = 1; i <= len; i++){
			if(len%i!=0)
				continue;
			s1 = str.substr(0, i);
			
			int flag = 1;
			for(int j = i; j < len; j+=i){
				s2 = str.substr(j, i);
				if(s1!=s2){
					flag = 0;
					break;	
				}
			}
			if(flag){
				cnt = i;
				ans = s1;
				break;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}

