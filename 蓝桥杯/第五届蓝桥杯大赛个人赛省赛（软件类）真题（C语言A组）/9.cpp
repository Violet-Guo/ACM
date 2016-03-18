#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long long n, m, p;
	long long ans;
	while(scanf("%lld %lld %lld", &n, &m, &p)!=EOF){
		long long fm, ans, maxn, cnt, a, b, c;
		ans = fm = 0;
		cnt = 1;
		
		while(cnt <= n){
			if(cnt == 1){
				a = 1;
				ans+=a;
				if(m==cnt)
					fm = a;
				cnt++;
				continue;
			}
			if(cnt == 2){
				b = 1;
				ans+=b;
				if(m==cnt)
					fm = b;
				cnt++;
				continue;
			}
			
			c = a+b;
			a = b;
			b = c;
			if(m == cnt)
				fm = c;
			if(fm!=0)
				ans = (ans+c)%fm;
			else
				ans+=c;
			cnt++;
		} 
		
		if(fm == 0){
			while(cnt<=m){
				c = a+b;
				a = b;
				b = c;
				if(m==cnt)
					fm = c;
				cnt++;
			}
		}
		
		ans = ans%fm%p;
		
		printf("%lld\n", ans);
	}
	return 0;
}

