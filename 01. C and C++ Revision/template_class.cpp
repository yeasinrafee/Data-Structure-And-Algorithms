#include<bits/stdc++.h>
using namespace std;

const int N = 0;

template <class T>
class Arithmetic{
private:
	T a, b;
public:
	Arithmetic(T a, T b);
	T add();
	T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
	this->a = a;
	this->b = b;
}

template<class T>
T Arithmetic<T>::add(){
	return a+b;
}

template<class T>
T Arithmetic<T>::sub(){
	return a-b;
}

int main(){

	Arithmetic<int> a(20, 10);
	Arithmetic<float> b(20.5, 10.5);

	cout<<a.add()<<" "<<a.sub()<<endl;
	cout<<b.add()<<" "<<b.sub()<<endl;
	

	return 0;
}