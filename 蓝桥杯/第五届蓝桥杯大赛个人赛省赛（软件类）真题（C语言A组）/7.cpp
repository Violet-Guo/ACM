#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int num[55], f[55], b[55];	

int main()
{
	int n, a;
	while(scanf("%d", &n)!=EOF){
		int cnt = 1;
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a);
			num[i] = abs(a);
			if(a > 0)
				f[i] = 1;
			else
				f[i] = -1;
		}
		
		int flag = f[0];
		if(flag==1){   //��ð������������ 
			for(int i = 1; i < n; i++){   //�������ߵ����϶���Ⱦ�� 
				if(num[i] > num[0] && f[i]==-1){
					cnt++;	
				}
			}
			if(cnt > 1){
				for(int i = 1; i < n; i++){    //�������ߵ����϶���Ⱦ�� 
					if(num[i] < num[0] && f[i]==1)
						cnt++;
				}
			}
		}
		else{         //��ð������������ 
			for(int i = 1; i < n; i++){    //�������ߵ����϶���Ⱦ�� 
				if(num[i] < num[0] && f[i]==1){
					cnt++;
				}
			}
			if(cnt > 1){
				for(int i = 1; i < n; i++){    // �������ߵ����϶���Ⱦ�� 
					if(num[i] > num[0] && f[i]==-1)
						cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	} 
	return 0;
}

