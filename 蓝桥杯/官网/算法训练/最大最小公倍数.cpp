#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;


int main()
{
	__int64 n, maxn, res;
	while(scanf("%d", &n)!=EOF){
		if(n <= 2){
			res = n;
		}
		else if(n%2!=0){    //nΪ���� 
			res = n*(n-1)*(n-2);
		}
		else{
			if(n%3!=0){    //n�����Ա�3����
				res = n*(n-1)*(n-3); 
			}
			else{
				res = (n-1)*(n-2)*(n-3);
			}
		}
		printf("%I64d\n", res);
	}
	return 0;
}

