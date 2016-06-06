#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, a, i;
	int cnt1, cnt2;
	while(scanf("%d", &n)!=EOF){
		cnt1 = cnt2 = 0;
		
		for(int i = 0; i < n; i++){
			cin >> a;
			if(a%2 == 0)
				cnt1++;
			else
				cnt2++;
		}
		
		if(cnt1 > cnt2)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}

