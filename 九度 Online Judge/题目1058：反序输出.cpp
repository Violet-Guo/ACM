#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[10];
	while(scanf("%s", str)!=EOF){
		for(int i = 3; i >= 0; i--)
			printf("%c", str[i]);
		printf("\n");
	} 
	return 0;
}

