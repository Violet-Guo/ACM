#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[10005];

int main()
{
	int n, a;
	memset(num, 0, sizeof(num));
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		num[a]++;
	}
	int inum, imax;
	inum = imax = 0;
	for(int i = 1; i < 10005; i++){
		if(imax < num[i]){
			imax = num[i];
			inum = i;
		}
	}
	printf("%d\n", inum);
	return 0;
}

