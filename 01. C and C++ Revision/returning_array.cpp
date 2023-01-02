#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int *get_array(int size){
	int *arr;
	//arr = (int*)malloc(sizeof(size));	// Allocating memory into heap by using c
	arr = new int(size);		// Allocating memory into heap by using c++

	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	return arr;
}

int main(){
	
	int *ptr;
	int n;
	cin>>n;
	ptr = get_array(n);

	for(int i = 0; i < n; i++){
		cout<<ptr[i]<<" ";
	}

	delete[] ptr;	//Free the heap memory in c++
	//free(ptr);		//Free the memory in c;

	return 0;
}