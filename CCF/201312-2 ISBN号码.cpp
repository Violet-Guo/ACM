#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	char isbn[20], b;
	int sum = 0, num;
	memset(isbn, '\0', sizeof(isbn));
	scanf("%s", isbn);
	num = isbn[12]-'0';
	for(int i = 0, j = 1; i < 11; i++){
		if('-' == isbn[i])
			continue;
		sum = sum+j*(isbn[i]-'0');
		j++;
	}
	
	sum%=11;
	
	if(10 == sum)
		b = 'X';
	else
		b = '0'+sum;
	
	if(isbn[12] == b)
		printf("Right\n");
	else{
		for(int i = 0; i < 12; i++)
			printf("%c", isbn[i]);
		printf("%c\n", b);
	}
	return 0;
}

