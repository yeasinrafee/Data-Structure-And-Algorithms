#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct person{
	char name[20];
	int age;
};

void year_passed(struct person *p1, int year){
	p1->age += year;
}

void new_child(struct person p1){
	// p1.name = "Infi";
	p1.age = 2;

	cout<<p1.name<<endl<<p1.age<<endl;
}

int main(){

	person p1{"Rafee", 20};
	year_passed(&p1, 2);
	cout<<p1.name<<endl<<p1.age<<endl;

	new_child(p1);

	return 0;
}