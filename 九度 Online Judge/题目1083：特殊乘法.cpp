#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;

char a[15], b[15];

int main()
{
	while(scanf("%s %s", a, b)!=EOF){
		int lena = strlen(a);
		int lenb = strlen(b);
		
		ll ans = 0;
		for(int i = 0; i < lena; i++){
			for(int j = 0; j < lenb; j++){
				ans = ans+(a[i]-'0')*(b[j]-'0');
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}

