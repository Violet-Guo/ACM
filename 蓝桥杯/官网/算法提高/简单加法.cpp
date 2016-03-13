#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long ans = 0;
	int i = 3;
	while(i < 1000){
		if(i%3==0 || i%5==0){
			ans+=i;
		}
		i++;
	}
	cout<<ans<<endl;
	return 0;
}

