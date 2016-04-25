#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;


int n;
int num1[500000], num2[500000];

int main()
{
	while(scanf("%d", &n)!=EOF){
		int len1 = 0, len2 = 0, a;
		for(int k = 0; k < n; k++){
			scanf("%d", &a);
			if(a%2==0)
				num1[len1++] = a;
			else
				num2[len2++] = a;
		}
		
		
		for(int i = 0; i < len2; i++){
			if(i)
				printf(" ");
			printf("%d", num2[i]);
		}
		
		if(len1>0 && len2>0)
			printf(" ");
		
		
		for(int i = 0; i < len1; i++){
			if(i)
				printf(" ");
			printf("%d", num1[i]);
		}
		printf("\n");
	}
	return 0;
}

