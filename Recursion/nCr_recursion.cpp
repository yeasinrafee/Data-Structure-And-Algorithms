#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int fact(int n){
	if(n == 0) return 1;
	return fact(n-1)*n;
}

// nCr using formula:
int nCr(int n, int r){
	int num, den;

	num = fact(n);
	den = fact(r) * fact(n-r);

	return num/den;
}

// nCr using pascal's formula:
int NCR(int n, int r){
	if(n == r || r == 0)
		return 1;
	return NCR(n-1, r-1) + NCR(n-1, r);
} 

int main(){

	cout<<NCR(4, 2)<<endl;
	

	return 0;
}