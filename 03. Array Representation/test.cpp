#include<bits/stdc++.h>
using namespace std;

int main(){
	int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
	
	cout<< *(*(x+2)+1)<<endl;

	return 0;
}

