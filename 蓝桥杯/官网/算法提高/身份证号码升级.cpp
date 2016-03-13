#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num1[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char num2[] = {"10x98765432"};

int main()
{
	char str[20];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str);
		int flag = 1, res = 0;
		for(int i = 0; i < len; i++){
			if(i < 6){
				printf("%c", str[i]);
				res = (res+num1[i]*(str[i]-'0'))%11;
			}
			else{
				if(flag==1){
					printf("19");
					res = (res+num1[i]*1)%11;
					res = (res+num1[i+1]*9)%11;
					flag = 0;
				}
				
				printf("%c", str[i]);
				res = (res+num1[i+2]*(str[i]-'0'))%11;
			}
		}
		
		printf("%c\n", num2[res]);
	}
	return 0;
}

