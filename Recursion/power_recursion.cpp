#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int power(int m, int n){
	if(n == 0)
		return 1;
	return power(m, n-1)*m;
}

int power2(int m, int n){
	if(n == 0)
		return 1;
	if(n%2 == 0)
		return power2(m*m, n/2);
	return m*power2(m*m, (n-1)/2);
}

int main(){
	int p = power2(2, 8);
	cout<<p<<endl;

	return 0;
}