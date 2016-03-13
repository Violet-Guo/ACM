#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;

char numm[] = {"01234567"};

int main()
{
	char num[100010];
	char res[100010];
	int p;
	scanf("%d", &p);
	while(p--){
		scanf("%s", num);
		int len = strlen(num);
		__int64 a = 0, n = 1;
		
		for(int i = len-1; i>=0; i--){
			if(i < len-1)
				n*=16;
			if(isdigit(num[i])){
				a += n*(num[i]-'0');
			}
			else if(isalpha(num[i])){
				a += n*(num[i]-'A'+1+9);
			}
		}
		//printf("%d\n", a);
		
		int r, co = 0;
		while(a >= 8){
			r = a%8;
			a/=8;
			res[co++] = numm[r];
		}
		res[co] = numm[a];
		
		for(int i = co; i>=0; i--)
			printf("%c", res[i]);
		printf("\n");
	}
	return 0;
}
