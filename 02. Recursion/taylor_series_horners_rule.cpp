#include<bits/stdc++.h>
using namespace std;

const int N = 0;

double e(int x, int n){

	static double s;
	
	if(n == 0)
		return s;
	s = 1+x*s/n;
	return e(x, n-1);
}

double e2(int x, int n){

	double s = 1;
	double num = 1;
	double den = 1;

	for(int i = 1; i <= n; i++){
		num*=x;
		den*=i;
		s+=num/den;
	}

	return s;
}

int main(){
	printf("%lf \n", e2(1, 10));

	return 0;
}