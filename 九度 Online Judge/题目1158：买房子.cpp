#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	double cnt, n, k, sum;
	while(scanf("%lf %lf", &n, &k)!=EOF){
		sum = n;
		cnt = 1;
		int fang = 200;
		
		int flag = 1;
		
		while(sum < fang){
			fang = (1+k/100)*fang;
			sum+=n;
			cnt++;
			if(cnt > 20){
				printf("Impossible\n");
				flag = 0;
				break;
			}
		}
		if(flag==1){
			printf("%.0lf\n", cnt);
		}
	}
	return 0;
}

