#include<cstdio>
#include<iostream> 
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

string s, t;
int a[2005], b[2005];

void createtree(string s, int c[2005]){
	int len = s.length();
	for(int i = 0; i < len; i++){
		int t = s[i]-'0';
		for(int j = 1; j <= 2000;){
			if(c[j] == -1){
				c[j] = t;
				break;
			}
			else if(c[j] > t)
				j = j*2;
			else
				j = j*2+1;
		}
	}
}

int main()
{
	int n, i;
	while(scanf("%d", &n)!=EOF){
		cin >> s;
		memset(a, -1, sizeof(a));
		createtree(s, a);
		
		while(n--){
			memset(b, -1, sizeof(b));
			cin >> t;
			createtree(t, b);
			for(i = 0; i <= 2000; i++){
				if(a[i]!=b[i])
					break;
			}
			if(i&2000)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}

