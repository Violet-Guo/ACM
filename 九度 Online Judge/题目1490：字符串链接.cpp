#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char str1[8000], str2[8000];

void MyStrcat(){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i, j;
	
	for(i = len1, j = 0; j < len2; i++, j++){
		str1[i] = str2[j];
	}
	str1[i] = '\0';
}

int main()
{
	while(scanf("%s %s", str1, str2)!=EOF){
		MyStrcat();
		printf("%s\n", str1);
	}
	return 0;
}

