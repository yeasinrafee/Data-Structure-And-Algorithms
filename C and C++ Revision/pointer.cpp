#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct req{
	int len;
	int beth;
};

int main(){
	int *ptr;

	// ptr = (int*)malloc(5*sizeof(int));		//Use in c for D.allocating memory
	ptr = new int[5];		//Use in c++ for D.allocating memory
	ptr[0] = 5;
	ptr[1] = 4;
	ptr[2] = 9;
	ptr[3] = 8;
	ptr[4] = 2;
	for(int i = 0; i < 5; i++){
		cout<<ptr[i]<<endl;
	}
	delete [] ptr;		// use in c++ for delete the memory
	// free(ptr)		// use in c for delete the memory

	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct req *r;

	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(r)<<endl;

	return 0;
}