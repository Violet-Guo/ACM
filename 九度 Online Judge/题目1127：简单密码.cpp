#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;

char s[] = {"VWXYZABCDEFGHIJKLMNOPQRSTU"};

int main()
{
	char star[250], en[250], mi[250];
	while(scanf("%s", star)!=EOF){
		getchar();
		
		if(strcmp(star, "ENDOFINPUT") == 0)
			break;
			
		gets(mi);
		gets(en);
		
		int len = strlen(mi);
		
		for(int i = 0; i < len; i++){
			if(isalpha(mi[i])){
				printf("%c", s[mi[i]-'A']);
			}
			else
				printf("%c", mi[i]);
		}
		printf("\n");
	}
	return 0;
}

