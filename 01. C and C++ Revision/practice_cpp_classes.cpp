#include<bits/stdc++.h>
using namespace std;

const int N = 0;

class Rectangle{

private:
	int length, breadth;

public:
	Rectangle(){
		length = 0;
		breadth = 0;
	}

	Rectangle(int l, int b){
		length = l;
		breadth = b;
	}

	int area(){
		return length*breadth;
	}

	int perimeter(){
		return 2*(length + breadth);
	}

	void setLength(int l){
		length = l;
	}

	void setBreadth(int b){
		breadth = b;
	}

	void takeLengthBreadth(){
		cin>>length>>breadth;
	}

	void display(){
		cout<<"Length: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
		cout<<"Area: "<<area()<<endl;
		cout<<"Perimeter: "<<perimeter()<<endl;
	}
};

int main(){
	Rectangle r(5, 6);
	r.takeLengthBreadth();
	r.area();
	r.perimeter();
	r.display();

	return 0;
}