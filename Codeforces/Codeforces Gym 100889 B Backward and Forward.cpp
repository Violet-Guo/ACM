#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

__int64 a[100005];

int main()
{
	int t;
	long long n, i, j;
	scanf("%d", &t);
	while(t--){
		long long op = 0;
		
		scanf("%lld", &n);
		
		for(i = 0; i < n; i++){
			scanf("%I64d", &a[i]);
		}
		
		for(i = 0, j = n-1; i <= j; ){
			if(a[i]==a[j]){
				i++;
				j--;
			}
			else if(a[i] > a[j]){ // ��Ҫ��β����ʼ�ϲ� 
				j--;
				a[j]+=a[j+1];
				op++;
			}
			else{  //��ͷ����ʼ�ϲ� 
				i++;
				a[i]+=a[i-1];
				op++;
			}
		}
		printf("%lld\n", op);
	}
	return 0;
}



