#include<bits/stdc++.h>
using namespace std;

const int N = 0;

//void print_array(int *arr, int n){	// Using (*) operator
void print_array(int arr[], int n){		// Using []
	for(int i = 0; i < n; i ++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[] = {3, 4, 6, 2, 8, 4};
	int size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, size);		//Here the address of arr will be passed.
	

	return 0;
}