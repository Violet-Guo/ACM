#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int num[5];
	while(scanf("%d %d %d", &num[0], &num[1], &num[2])!=EOF){
		sort(num, num+3);
		
		int a = num[0]*num[0];
		int b = num[1]*num[1];
		int c = num[2]*num[2];
		int t = a+b;
		
		if(t > c)
			printf("���������\n");
		else if(t == c)
			printf("ֱ��������\n");
		else
			printf("�۽�������\n");
	}
	return 0;
}

