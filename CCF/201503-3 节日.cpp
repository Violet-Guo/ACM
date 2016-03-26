#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool runnian(int year){
	if((year%400 == 0) || (year%4 ==0 && year%100!=0))
		return true;
	return false;
}

int week[3005][13];   //第i年第j月的第一天为周几 

void init(){
	week[1850][1] = 2;
	for(int i = 1851; i <= 2055; i++){          //计算每年第一天为周几 
		if(runnian(i-1)){
			week[i][1] = (week[i-1][1] + 366 - 1)%7 + 1;   //因为周日%7==0，避免这一点 
		}
		else{
			week[i][1] = (week[i-1][1] + 365 - 1)%7 + 1;
		}
	}
	 
	for(int i = 1850; i <= 2055; i++){         //计算第i年第j月为周几
		int flag = 0;
		if(runnian(i))	flag = 1;
		for(int j = 2; j < 13; j++){
			if(j==3)
				week[i][j] = (week[i][j-1] + month[j-1] + flag - 1)%7 + 1;
			else
				week[i][j] = (week[i][j-1] + month[j-1] - 1)%7 + 1;
		}
		 
	
	} 
}

int main()
{
	init();
	int a, b, c, y1, y2;
	while(scanf("%d %d %d %d %d", &a, &b, &c, &y1, &y2)!=EOF){
		int day, flag = 0;
		for(int i = y1; i <= y2; i++){
			int d;
			if(week[i][a] > c)
				d = 7 - (week[i][a] - c);
			else
				d = c - week[i][a];
				
			day = (b-1)*7 + d + 1;
			
			if(runnian(i))
				month[2] = 29;
			else 	
				month[2] = 28;
			
			if(day > month[a])
				printf("none\n");
			else{
				printf("%04d/%02d/%02d\n", i, a, day);
			}
			
		}
	}
	return 0;
}

