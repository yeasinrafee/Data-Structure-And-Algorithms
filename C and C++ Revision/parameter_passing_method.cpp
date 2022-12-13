#include<bits/stdc++.h>
using namespace std;

const int N = 0;

//pass by value:
void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int num1 = 1, num2 = 9;
	swap(num1, num2);	//It'll not work, for passing by value

	cout<<"Number-1: "<<num1<<endl<<"Number-2: "<<num2<<endl;

	return 0;
}