#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct Rectangle{
	int length;
	int breath;
};

void initialise(struct Rectangle *r, int l, int b){
	r->length = l;
	r->breath = b;
}

int area (Rectangle r){
	return r.length*r.breath;
}

int perimeter(struct Rectangle r){
	int p = 2 * (r.length + r.breath);
}

int main(){

	Rectangle r{0, 0};

	int l = 0, b = 0;
	cout<<"Enter the length and breath: "<<endl;
	cin>>l>>b;
	initialise(&r, l, b);	

	int a = area(r);
	int p = perimeter(r);

	cout<<"Area: "<<a<<endl<<"Perimeter: "<<p<<endl;
	return 0;
}