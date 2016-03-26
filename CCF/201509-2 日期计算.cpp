#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;



int main()
{
	int y, d, month, day;
	int a[13];
	a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
	a[4] = a[6] = a[9] = a[11] = 30;
	while(scanf("%d %d", &y, &d)!=EOF){
		if((y%4==0 && y%100!=0) || y%400==0)
			a[2] = 29;
		else
			a[2] = 28;
			
		for(int i = 1; i < 13; i++){
			if(d > a[i]){
				d-=a[i];
			}
			else{
				day = d;
				month = i;
				break;
			}
		}
		printf("%d\n%d\n", month, day);
	}
	return 0;
}

