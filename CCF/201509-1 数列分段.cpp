#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int a[1010];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	int sum = 1;
	
	for(int i = 1; i < n; i++){
		if(a[i] != a[i-1])
			sum++;
	}
	
	printf("%d\n", sum);
	
	return 0;
}

