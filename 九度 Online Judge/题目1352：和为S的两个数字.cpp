#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[1000005];

int main()
{
	int n, k;
	while(scanf("%d %d", &n, &k)!=EOF){
		for(int i = 0; i < n; i++)	
			scanf("%d", &num[i]);
			
		if(k < 0){
			cout << "-1 -1" << endl;
			continue;
		}
			
		int start = 0, end = n-1;
		
		while(end > start && num[start]+num[end] != k){
			if(num[start]+num[end] > k)
				end--;
			else
				start++;
		}
		
		if(end <= start)
			cout << "-1 -1" << endl;
		else
			cout << num[start] << " " << num[end] << endl;
	}
	return 0;
}

