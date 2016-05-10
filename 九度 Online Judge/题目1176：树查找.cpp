#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int tree[1005]; 

int main()
{
	int n, m;
	while(scanf("%d", &n)!=EOF){
		for(int i = 1; i <= n; i++)
			scanf("%d", &tree[i]);
		
		cin >> m;
		
		int beg = (int)pow(2, m-1);
		int end = (int)pow(2, m);
		
		if(beg > n){
			cout << "EMPTY" << endl;
		}
		else{
			for(int i = beg; i < end && i <= n; i++){
				if(i-beg)
					cout << " ";
				cout << tree[i];
			}
			cout << endl;
		}
		
	}
	return 0;
}

