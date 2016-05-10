#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void swap(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

int partition(int a[], int p, int r){
	int i = p, j = r+1, x = a[p];
	while(1){
		while(i < r && a[++i] < x);
		while(a[--j] > x);
		if(i >= j)
			break;
		swap(a, i, j);
	}
	swap(a, p, j);
	return j;
}


void quicksort(int a[], int p, int r){
	if(p < r){
		int q = partition(a, p, r);
		quicksort(a, p, q-1);
		quicksort(a, q+1, r);
	}
}

int main()
{
	char str[25];
	int num[25];
	while(scanf("%s", str)!=EOF){
		int len = strlen(str);
		for(int i = 0; i < len; i++)
			num[i] = str[i];
			
		quicksort(num, 0, len-1);
		
		for(int i = 0; i < len; i++)
			printf("%c", num[i]);
		printf("\n");
	}
	return 0;
}

