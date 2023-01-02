#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int sum(int n){
	if(n == 0)
		return 0;
	return sum(n-1)+n;
}

int main(){
	
	int s = sum(5);
	cout<<s<<endl;

	return 0;
}