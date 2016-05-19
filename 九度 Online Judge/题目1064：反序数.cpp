#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int i1, i2, i3, i4, n1, n2, n3, n4;
	for(int i = 1000; i < 10000; i++){
		n = i * 9;
		if(n >= 10000)
			break;
		i1 = i%10;
		i2 = i%100/10;
		i3 = i%1000/100;
		i4 = i/1000;
		//cout << i1 << i2 << i3 << i4 << endl;
		
		n1 = n%10;
		n2 = n%100/10;
		n3 = n%1000/100;
		n4 = n/1000;
		//cout << n1 << n2 << n3 << n4 << endl;
		
		if(n1==i4 && n2==i3 && n3==i2 && n4==i1)
			printf("%d\n", i);
	}
	return 0;
}

