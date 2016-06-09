#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[200];
	int i, j, len;
	while(gets(str)!=NULL){
		len = strlen(str);
		for(i = 0; i < len; i++){
			if(str[i] == ' '){
				for(j = i+1; j < len; j++){
					str[j-1] = str[j];
				}
				str[j] = str[j-1] = '\0';
			}
		}
		
		cout << str << endl;
	}
	return 0;
}

