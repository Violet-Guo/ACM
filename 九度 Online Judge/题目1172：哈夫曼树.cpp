#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[1005];
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			cin >> num[i];
			
		int sum = 0;
		for(int i = 1; i < n; i++){
			sort(num+i-1, num+n);
			sum = sum+num[i]+num[i-1];
			num[i]+=num[i-1];
		}
		
		cout << sum << endl;
	}
	return 0;
}

