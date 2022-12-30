#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int e(int x, int n){
	static int p = 1, f = 1;
	int r;
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
	int t = e(2, 3);
	cout<<t<<endl;

	return 0;
}