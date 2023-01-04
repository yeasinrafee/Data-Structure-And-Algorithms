#include<bits/stdc++.h>
using namespace std;

int main(){

	// 2D array in stack only:
	int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6}, {1, 3, 5}};		//Store in Stack only.
	

	// 2D array in stack + heap:
	int *B[3];		//Store in stack only.
	B[0] = new int[4];		//using C++
	B[1] = (int *)malloc(4*sizeof(int));	//using C
	B[2] = new int[4];		//using C++
	
	
	// 2D array in heap only:
	int **C;		//Store in stack only.
	C = (int **)malloc(3 * sizeof(int *));		//Store in heap
	C[0] = new int[4];		//using C++
	C[1] = (int *)malloc(4*sizeof(int));	//using C
	C[2] = new int[4];		//using C++
	
	for(int i = 0; i < 3; i++){
	for(int j = 0; j < 4; j++)
			cout<<C[i][j]<<" ";
		cout<<"\n";
	}
	
	
	return 0;
}

