#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct Person{
	char name;
	int age;
	int logic[2];
};

struct Person *create(){
	struct Person *p;
	// p = new Person;		//Creating memory into heap for the structure using C++

	p = (struct Person*)malloc(sizeof(Person));		//Creating memory into heap for the structure using C

	p->name = 'R';
	p->age = 20;
	p->logic[0] = 0;
	p->logic[1] = 1;

	return p;
}

int main(){
	struct Person *ptr = create();
	cout<<ptr->name<<endl<<ptr->age<<endl<<ptr->logic[0]<<endl<<ptr->logic[1]<<endl;

	//delete ptr;		//Delete allocated memory in C++

	free(ptr);		//Delete allocated memory in C

	cout<<ptr->age<<endl;		//Give garbage value

	return 0;
}