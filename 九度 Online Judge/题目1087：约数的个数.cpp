#include<cstdio>
#include<cmath>

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF && n!=0){
        int count[1001];
        for(int i = 0; i < n; i++){
            long long buf;
            scanf("%lld", &buf);
            if(buf == 1) 
		count[i] = 1;
            else{
                count[i] = 2;
                int bound = (int)sqrt(buf);
                double b = sqrt(buf);
                for(int j = 2; j < b; j++){
                    if(buf%j == 0) 
		    	count[i] += 2;    
                }
                if(bound == b) 
			count[i]+=1;
            }
        }
        for(int i = 0; i < n; i++) 
		printf("%d\n", count[i]);
    }
    return 0;    
}
