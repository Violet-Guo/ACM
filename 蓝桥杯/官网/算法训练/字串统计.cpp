#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int l, maxn, cnt;
	string s, s1, s2, ans;
	while(scanf("%d", &l)!=EOF){
		cin >> s;
		int len = s.length();
		maxn = cnt = 0;
		
		for(int i = l; i <= len; i++){
			for(int j = 0; j + i <= len; j++){
				cnt = 0;
				s1 = s.substr(j, i);
				for(int k = 0; k+i <= len; k++){
					s2 = s.substr(k, i);
					if(s1 == s2)
						cnt++;
				}
				if(cnt > maxn){
					ans = s1;
					maxn = cnt;
				}
				else if(cnt == maxn && s1.length() > ans.length()){
					ans = s1;
				}
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}

