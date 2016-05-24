#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	int num[100], r[100];
	int ans, maxn;
	while(scanf("%d", &k)!=EOF){
		ans = 0;
		for(int i = 0; i < k; i++){
			maxn = 0;
			r[i] = 1;
			cin >> num[i];
			for(int j = 0; j < i; j++){
				if(num[j] >= num[i] && r[j] > maxn){
					maxn = r[j];
				}
			}
			
			r[i] = maxn + 1;
			if(r[i] > ans)
				ans = r[i];
		}
		
		cout << ans << endl;
	}
	return 0;
}

