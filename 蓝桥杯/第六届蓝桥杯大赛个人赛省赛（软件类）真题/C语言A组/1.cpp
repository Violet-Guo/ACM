#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	for(int i = 1; i < 50; i++){
		for(int j = 1; j < 50; j++){
			for(int k = 1; k < 50; k++){
				if(i*i+j*j+k*k == 1000)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return 0;
}

