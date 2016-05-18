#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm> 
using namespace std;

int main()
{
	int n;
	int a[250], b, ans;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
		 	cin >> a[i];
			 
		cin >> b;
		ans = -1;
		
		for(int i = 0; i < n; i++){
			if(b == a[i])
				ans = i;
		} 
		
		cout << ans << endl;
	} 
	return 0;
}

