#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int funA(int n){
	if(n>100){
		return n - 10;
	}else{
		funA(funA(n+11));
	}
}

int main(){
	int value = funA(95);
	cout<<value<<endl;

	return 0;
}