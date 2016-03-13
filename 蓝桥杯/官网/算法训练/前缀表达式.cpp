#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

int main()
{
	char str[20];
	while(gets(str)){
		int len = strlen(str);
		int res = 0, num1, num2, i;
		
		num1 = num2 = 0;
		for(i = 2; i < len; i++){
			if(isdigit(str[i])){
				num1 = num1*10 + str[i] - '0';	
			}
			if(str[i] == ' ')
				break;	
		}
		
		for(; i < len; i++){
			if(isdigit(str[i])){
				num2 = num2*10 + str[i] - '0';
			}
		}
		
		if(str[0] == '+'){
			res = num1+num2;
		}
		else if(str[0] == '-'){
			res = num1-num2;
		}
		else if(str[0] == '*'){
			res = num1*num2;
		}
		else if(str[0] == '/'){
			res = num1/num2;
		}
		
		printf("%d\n", res);
	}
	return 0;
}

