#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[5500];

int main()
{
	int n, m, beg, en, res, co;
	while(scanf("%d", &n)!=EOF){
		if(n>0 && n<20){
			memset(num, 0, sizeof(num));
			
			for(int i = 0; i < n; i++){
				scanf("%d", &m);
				num[m]++;
				if(i == 0)
					beg = m;
				if(i == n-1)
					en = m;
			}
			
			res = co = 0;
			for(int i = beg; i <= en; i++){
				if(num[i] > co){
					res = i;
					co = num[i];
				}
			}
			
			printf("%d\n", res);	
		}
	}
	return 0;
}

