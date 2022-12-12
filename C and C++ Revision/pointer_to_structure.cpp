#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct Req{
	int height;
	int width;
};

int main(){

	// // Assigning strucutre into pointer and accessing the values:
	// Req r{6, 4};
	// Req *p = &r;
	// cout<<p->height<<endl<<p->width<<endl;


	// // Creating Object of a stucture into heap (using malloc)
	// Req *p;
	// p = (struct Req *)malloc(sizeof(struct Req));
	// p->height = 5;
	// p->width = 6;
	// cout<<"Area: "<<p->height*p->width<<endl;
	// free(p);


	// Creating Object of a stucture into heap (using new)
	Req *p;
	p = new Req;
	p->height = 5;
	p->width = 6;
	cout<<"Area: "<<p->height*p->width<<endl;
	delete []p;
	cout<<p->height;

	return 0;
}					