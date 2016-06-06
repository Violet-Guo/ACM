#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

int main()
{
	char str[100];
	while(gets(str)!=NULL){
		if(strcmp("!", str)==0)
			break;
		
		int len = strlen(str);
		for(int i = 0; i < len; i++){
			if(isalpha(str[i])){
				if(str[i]>='a' && str[i]<='z'){
					printf("%c", 'z'-(str[i]-'a'));
				}
				else{
					printf("%c", 'Z'-(str[i]-'A'));
				}
			}	
			else{
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

