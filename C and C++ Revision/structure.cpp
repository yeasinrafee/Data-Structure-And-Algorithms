#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct Rectange{
	int length;
	int breadth;
	char c;
};

int main(){
	struct Rectange r1;
	r1.length = 10;
	r1.breadth = 5;

	// cout<<"The Area of rectange is: "<<r1.length*r1.breadth<<endl;
	cout<<sizeof(r1);

	return 0;
}