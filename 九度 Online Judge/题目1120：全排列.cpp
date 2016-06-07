#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char str[20];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str); 	
		sort(str, str+len);
		puts(str);
		while(next_permutation(str, str+len)){
			puts(str);
		}
		cout << endl;
	}
	return 0;
}

