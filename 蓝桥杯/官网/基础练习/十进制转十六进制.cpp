#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char num[] = {"0123456789ABCDEF"};

int main()
{
	int a;
	char res[100];
	while(scanf("%d", &a)!=EOF){
		int r, co = 0;
		while(a >= 16){
			r = a%16;
			a/=16;
			res[co++] = num[r];
		}
		res[co] = num[a];
		
		for(int i = co; i>=0; i--)
			printf("%c", res[i]);
		printf("\n");
	}
	return 0;
}

