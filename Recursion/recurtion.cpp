#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void fun(int x){
	if(x>0){
		fun(x-1);
		cout<<x<<endl;

	}
}

int main(){

	int x = 5;

	fun(x);
	

	return 0;
}