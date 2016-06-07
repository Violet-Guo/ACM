#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{	
	int n;
	unsigned short a, b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		
		int flag = 0;
		unsigned short a1, a2;
		
		if(a == b)
			flag = 1;
		else{
			for(int i = 1; i < 16; i++){
				a1 = a << i;
				a2 = a >> (16-i);
				
				if((a1|a2) == b){
					flag = 1;
					break;
				}
			}
		}
		
		
		if(flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
			
	} 
	return 0;
}

