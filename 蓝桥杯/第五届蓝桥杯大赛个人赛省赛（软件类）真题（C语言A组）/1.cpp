#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int flag = 0;
	for(int i = 1; i < 20; i++){
		for(int j = 1; j < 20; j++){
			if(j-i>8)
				break;
			else{
				if(i*j==6*(i+j)){
					flag = 1;
					printf("%d %d\n", i, j);
					break;
				}
			}
		} 
		if(flag)
			break;
	} 
	return 0;
}

