#include<cstdio>
#include<cctype>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char str[20005];

int main()
{
	while(gets(str)!=NULL){
		int len = strlen(str);
		
		int cnt = 0, flag = 1, c = 0;
		for(int i = 0; i < len; i++){
			if(isalpha(str[i])){
				cnt++;
				flag = 1;
			}
			else if(flag == 1){
				if(c)
					cout << " ";
				cout << cnt;
				c++;
				cnt = 0;
				flag = 0;
			}
		}
		cout << endl;
		
	}
	return 0;
}

