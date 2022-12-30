#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void funA(int n);
void funB(int n);

int main(){
	int n = 20;
	funA(n);

	return 0;
}

void funA(int n){
	if(n>0){
		cout<<n<<endl;
		funB(n-1);
	}
}

void funB(int n){
	if(n>1){
		cout<<n<<endl;
		funA(n/2);
	}
}