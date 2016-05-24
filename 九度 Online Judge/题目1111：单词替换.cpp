#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char s[200], a[200], b[200];
	int lens, lena, lenb, flag;
	while(gets(s)){
		gets(a);
		gets(b);
		lens = strlen(s);
		lena = strlen(a);
		lenb = strlen(b);
		
		for(int i = 0; i < lens; ){
			if((s[i] == a[0] && i == 0) || (s[i] == a[0] && s[i-1] == ' ' && i>=1)){
				flag = 1;
				for(int j = 1; j < lena; j++){
					if(s[i+j]!=a[j]){
						flag = 0;
						break;
					}
				}
				if(flag == 1){
					i+=lena;
					printf("%s", b);
				}
				else{
					printf("%c", s[i]);
					i++;
				}
			}
			else{
				printf("%c", s[i]);
				i++;
				continue;
			}
		}
		
		printf("\n");
	}
	return 0;
}

