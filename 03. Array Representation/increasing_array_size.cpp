#include<bits/stdc++.h>
using namespace std;

int main(){

	int *p, *q;
	
	p = (int *)malloc(5 * sizeof(int));
	p[0] = 2; p[1] = 5; p[2] = 6; p[3] = 3; p[4] = 9;
	
	q = (int *)malloc(10 * sizeof(int));
	
	for(int i = 0; i < 5; i ++)
		q[i] = p[i];
		
	free(p);
	p = q;
	q = NULL;
	
	p[5] = 1; p[6] = 7;
	
	
	for(int i = 0; i < 7; i++)
		cout<<p[i]<<endl;

	return 0;
}

