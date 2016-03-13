#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int year;
	while(scanf("%d", &year)!=EOF){
		if((year%4==0 && year%100!=0) || year%400==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

