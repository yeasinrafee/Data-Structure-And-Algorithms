#include<bits/stdc++.h>
using namespace std;

const int N = 0;

class Bank_A{
protected:
	float salary;
	float total_salary = 0;

public:
	Bank_A(){
		salary = 0;
	}

	void getSalary(float sal){
		salary += sal;
	}
	void bankA_balance(){
		total_salary += (salary + (salary * 0.6));

		cout<<"You are getting 6 percent of annual interest."<<endl;
		cout<<"Your total ammount is: "<<total_salary<<endl;
	}

};

class Bank_B: public Bank_A{
protected: 
	float savings = 0;
	float total = 0;

public:
	void setSavings(float sal){
		Bank_A();
		getSalary(sal);
		savings = salary;
	}

	void display_salary(){
		cout<<"Salary: "<<savings<<endl;
	}

	void total_salary(){
		total += (salary + (salary * 0.05));
		cout<<"You are getting 5 percent annual interest on your savings."<<endl;
		cout<<"Your salary is: "<< total<<endl;
	}

	void transfer_salary(){
		salary = total;
		cout<<"Amount "<<total<<" is tranfered to Bank A"<<endl;
	}


};

int main(){

	Bank_B harry;
	harry.setSavings(5000);
	harry.setSavings(5000);
	harry.display_salary();
	harry.total_salary();
	harry.transfer_salary();
	harry.bankA_balance();

	return 0;
}