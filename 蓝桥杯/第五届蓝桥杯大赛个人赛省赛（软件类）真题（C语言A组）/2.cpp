#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int fun(int n){
	if(n == 0)
		return 2;
	else
		return 2*fun(n-1)-1;
}

int main()
{
	printf("%d\n", fun(10));
	return 0;
}

