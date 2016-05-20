#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int h;
	while(scanf("%d", &h)!=EOF){
		int cnt1 = h;
		int cnt2 = 2*h-2;
		for(int i = 0; i < h; i++){
			for(int j = cnt2-1; j >= 0; j--)
				cout << " ";
			for(int j = cnt1-1; j >= 0; j--)
				cout << "*";
			cout << endl;
			cnt1+=2;
			cnt2-=2;
		}
	}
	return 0;
}

