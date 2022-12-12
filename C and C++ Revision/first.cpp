#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){

	// int arr[5] = {4, 6, 2, 7, 3};
	int n;
	cin>>n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i:arr){
		cout<<i<<" ";
	}

	return 0;
}