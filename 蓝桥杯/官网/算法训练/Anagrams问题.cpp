#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char word1[90], word2[90];

int main()
{
	while(scanf("%s %s", word1, word2)!=EOF){
		
		int sum1, sum2;
		
		sum1 = sum2 = 0;
		
		int len1 = strlen(word1);
		int len2 = strlen(word2);
		
		if(len1 > 80 || len2 > 80)
			continue;
		
		for(int i = 0; i < len1; i++){
			if(word1[i]>='a' && word1[i]<='z')
				word1[i]-=32;
			sum1 += word1[i];
		}
		
		for(int i = 0; i < len2; i++){
			if(word2[i]>='a' && word2[i]<='z')
				word2[i]-=32;
			sum2 += word2[i];
		}
		
		if(sum1 == sum2)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}

