#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, n;
	int a1, b1, c, d;
	int sum, ans, r;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		c = a;
		d = b;
		sum = a+b;
		
		ans = a1 = b1 = 0;
		while(sum){
			r = sum%10;
			ans = ans*10+r;
			sum/=10;	
		}
		
		while(a){
			r = a%10;
			a1 = a1*10+r;
			a/=10;
		}
		
		while(b){
			r = b%10;
			b1 = b1*10+r;
			b/=10;
		}
		
		sum = a1+b1;
		
		if(sum == ans)
			cout << c+d << endl;
		else
			cout << "NO" << endl; 
	}
	return 0;
}

