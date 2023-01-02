#include<bits/stdc++.h>
using namespace std;

const int N = 0;

double e(int x, int n){
	static double p = 1, f = 1;
	double r;
	if(n == 0)
		return 1;
	else{
		r = e(x, n-1);
		p = p*x;
		f = f*n;
		return r + p/f;
	}
}

int main(){
	double t = e(4, 15);
	// cout<<t<<endl;
	printf("%lf\n", t);

	return 0;
}