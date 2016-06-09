#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n, a, i, j, len;
	char str[100];
	cin >> n;
	while(n--){
		cin >> str;
		len = strlen(str);
		
		a = str[0]-'0';
		int flag = 1;
		for(i = 1; i < len; i++){
			if(str[i] == '.'){
				if(a > 255 || a < 0){
					flag = 0;
					break;
				}
				else{
					a = str[i+1]-'0';
					i++;
				}
			}
			else{
				a = a*10+str[i]-'0';
			}
		}
		
		if(a > 255 || a < 0){
			flag = 0;
		}
		
		if(flag){
			cout << "Yes!" << endl;
		}
		else{
			cout << "No!" << endl;
		}
	}
	return 0;
}

