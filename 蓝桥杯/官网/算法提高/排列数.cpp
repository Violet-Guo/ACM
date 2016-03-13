#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char str[]={"0123456789"};

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		int len = 10;
		int i = 1;
		
		do{
			if(i == n){
				puts(str);
				break;
			}
			else
				i++;
		}while(next_permutation(str, str+len));
	}
	return 0;
}

