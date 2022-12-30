#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int fact(int n){
	if(n == 0)
		return 1;
	return fact(n-1) * n;
}

int main(){
	int f = fact(5);
	cout<<f<<endl;

	return 0;
}