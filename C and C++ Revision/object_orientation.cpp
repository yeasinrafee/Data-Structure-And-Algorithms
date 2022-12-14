#include<bits/stdc++.h>
using namespace std;

const int N = 0;

class Rectangle{
	
public:
	int length;
	int breadth;

void initialise(int l, int b){
	length = l;
	breadth = b;
}

int area(){
	return length*breadth;
}

int perimeter(){
	int p = 2 * (length + breadth);
	return p;
}

};

int main(){

	Rectangle r;

	int l = 0, b = 0;
	cout<<"Enter the length and breadth: "<<endl;
	cin>>l>>b;

	r.initialise(l, b);

	int a = r.area();
	int p = r.perimeter();

	cout<<"Area: "<<a<<endl<<"Perimeter: "<<p<<endl;
	

	return 0;
}