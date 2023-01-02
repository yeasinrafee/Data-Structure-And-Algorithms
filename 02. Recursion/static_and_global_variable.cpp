#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int x = 0;

int fun(int n){
	// static int x = 0;
	if(n>0){
		x++;
		return fun(n-1) + x;
	}
	return 0;
}

int main(){
	
	int n = 5;
	cout<<fun(n)<<endl;
	cout<<fun(n)<<endl;

	return 0;
}
