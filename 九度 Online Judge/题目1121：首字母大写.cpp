#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	char str[200];
	while(gets(str)){
		int len = strlen(str);
		
		if(isalpha(str[0]) && islower(str[0])){
			str[0] = toupper(str[0]);
			cout << str[0];
		}
		else
			cout << str[0];
		
		for(int i = 1; i < len; i++){
			if((str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\r' || str[i-1] == '\n') && isalpha(str[i])){
				str[i] = toupper(str[i]);
				cout << str[i];
			}
			else{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}

