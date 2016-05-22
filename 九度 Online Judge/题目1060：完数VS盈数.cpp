#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int ans[65];

int num(int a){
	int sum = 0;
	for(int i = 1; i < a; i++){
		if(a%i == 0)
			sum+=i;
	}
	return sum;
}

int main()
{
	int i, j;
	for(i = 2; i <= 60; i++){
		ans[i] = 0;
		j = num(i);
		if(i == j)
			ans[i] = 1;
		else if(i < j)
			ans[i] = 2;
	} 
	
	int cnt1 = 0, cnt2 = 0;
	printf("E: ");
	for(i = 2; i <= 60; i++){
		
		if(ans[i] == 1){
			if(cnt1)
				printf(" ");
			printf("%d", i);
			cnt1++;
		}
	}
	
	printf("\n");
	
	printf("G: ");
	for(i = 2; i <= 60; i++){
		
		if(ans[i] == 2){
			if(cnt2)
				printf(" ");
			printf("%d", i);
			cnt2++;
		}
	}
	printf("\n");
	
	return 0;
}

