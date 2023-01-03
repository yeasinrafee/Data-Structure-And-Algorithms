#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//Creating array in stack:
	int arr[5] {1, 2, 3, 4, 5};
	
	//Creating array in heap:
	int *p;
	
	p = (int *)malloc(5 * sizeof(int));		//using C
//	p = new int(5);			//using C++
	
	p[0] = 6;
	p[1] = 7;
	p[2] = 8;
	p[3] = 9;
	p[4] = 10;
	
	for(int i = 0; i < 5; i ++)
		cout<<arr[i]<<" ";
		
	cout<<"\n";
		
	for(int i = 0; i < 5; i++)
		cout<<p[i]<<" ";
	
//	delete []p;
	free(p);
	return 0;
}

