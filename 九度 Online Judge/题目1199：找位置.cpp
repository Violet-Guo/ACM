#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;



int main()
{
	char str[200];
	int vis[200];
	while(scanf("%s", str)!=EOF){
		memset(vis, 0, sizeof(vis));
		
		map<char, int> mp;
		
		int len = strlen(str);
		for(int i = 0; i < len; i++){
			mp[str[i]]++;
		}
		
		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(mp[str[i]] > 1 && !vis[i]){
				cnt = 0;
				for(int j = i; j < len; j++){
					if(str[j] == str[i] && !vis[j]){
						vis[j] = 1;
						if(cnt)
							cout << ",";
						cout << str[j] << ":" << j;
						cnt++; 
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}

