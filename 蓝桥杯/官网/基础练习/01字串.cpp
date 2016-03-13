#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c, d, e;	
	for(a = 0; a < 2; a++){
		for(b = 0; b < 2; b++){
			for(c = 0; c < 2; c++){
				for(d = 0; d < 2; d++){
					for(e = 0; e < 2; e++){
						printf("%d%d%d%d%d\n", a, b, c, d, e);
					}
				}
			}
		}
	}
	return 0;
}

