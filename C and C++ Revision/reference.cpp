#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int a = 30;
	int &x = a;

	int b = 49;
	x = b;

	cout<<a<<endl<<x;

	return 0;
}