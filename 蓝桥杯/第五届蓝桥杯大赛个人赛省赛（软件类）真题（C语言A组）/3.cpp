#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int num[10];

int main()
{
	int cnt = 0;
	for(int i = 1; i < 10; i++){
		for(int j = 100; j < 1000; j++){
			memset(num, 0, sizeof(num));
			int a = j%10;
			int b = j/10%10;
			int c = j/100;
			if(a==i || b==i || c==i || a==b || a==c || b==c)
				continue;
			else{
				int res = i*j;
				if(res < 1000)
					continue;
				else{
					int d = res%10;
					int e = res/10%10;
					int f = res/100%10;
					int g = res/1000;
					if(d==e || d==f || d==g || e==f || e==g || f==g)
						continue;
					num[i] = num[a] = num[b] = num[c] = 1;
					if(num[e]==1 && num[f]==1 && num[d]==1 && num[g]==1){
						cnt++;
						printf("%d %d\n", i, j);
					}
				}
			}
		}
	}
	
	
	for(int i = 10; i < 100; i++){
		int a = i%10;
		int b = i/10;
		if(a == b)
			continue;
		for(int j = 10; j < 100; j++){
			memset(num, 0, sizeof(num));
			int c = j%10;
			int d = j/10;
			if(a==c || a==d || b==c || b==d || c==d)
				continue;
			else{
				int res = i*j;
				if(res < 1000)
					continue;
				else{
					num[a] = num[b] = num[c] = num[d] = 1;
					int e = res%10;
					int f = res/10%10;
					int g = res/100%10;
					int h = res/1000;
					if(e==f || e==g || e==h || f==g || f==h || g==h)
						continue;
					if(num[e]==1 && num[f]==1 && num[g]==1 && num[h]==1){
						cnt++;
						printf("%d %d\n", i, j);
					}
				}
			}
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}

