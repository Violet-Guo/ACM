#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int num[20], cnt, flag;
	for(int i = 0; i < 256; i++){
		n = i*i;
		cnt = 0;
		if(n < 10)
			printf("%d\n", i);
		else{
			cnt = 0;
			while(n){
				num[cnt++] = n%10;
				n/=10;
			}
			flag = 1;
			for(int j = 0; j < cnt; j++){
				if(num[j] != num[cnt-j-1]){
					flag = 0;
					break;
				}
			}
			if(flag)
				printf("%d\n", i);
		}
	}
	return 0;
}

