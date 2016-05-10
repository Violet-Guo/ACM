#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int s[100005];
int cnt;

int main()
{
	int n, a;
	char p;
	while(scanf("%d", &n)!=EOF && n){
		cnt = 0;
		while(n--){
			cin >> p;
			if(p == 'A'){
				if(cnt == 0)
					cout << "E" << endl;
				else
					cout << s[cnt-1] << endl;
			}
			else if(p == 'P'){
				cin >> a;
				s[cnt++] = a;
			}else if(p == 'O'){
				if(cnt > 0)
					cnt--;
			}
		}
		cout << endl;
	}
	return 0;
}

