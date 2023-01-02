#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int fun(int n){
	if(n>0){
		cout<<n<<" ";
		fun(n-1);
		fun(n-1);
	}
}

int main(){
	int n = 3;
	fun(n);

	return 0;
}