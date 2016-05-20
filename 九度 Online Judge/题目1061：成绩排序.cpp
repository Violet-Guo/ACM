#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


struct students{
	char name[150];
	int age;
	int sorce;
}stu[1500];


int cmp(const void *a, const void *b){
	struct students *c = (students *)a;
	struct students *d = (students *)b;
	
	if(c->sorce != d->sorce)
		return c->sorce - d->sorce;
	else if(strcmp(c->name, d->name)!=0)
		return strcmp(c->name, d->name);
	else
		return c->age - d->age; 
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i < n; i++)
			cin >> stu[i].name >> stu[i].age >> stu[i].sorce;
			
		qsort(stu, n, sizeof(stu[0]), cmp);
		
		for(int i = 0; i < n; i++)
			cout << stu[i].name << " " << stu[i].age << " " << stu[i].sorce << endl;
		
	}
	return 0;
}

