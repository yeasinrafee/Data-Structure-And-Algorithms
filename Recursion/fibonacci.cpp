#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int fib(int n){
	int t0 = 0, t1 = 1, s = 0;

	if(n<=1) return n;

	for(int i = 2; i <= n; i++){
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}

	return s;
}

int main(){
	
	cout<<fib(6)<<endl;

	return 0;
}