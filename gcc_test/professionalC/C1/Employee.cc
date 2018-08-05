//Employee .cc  
#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records{
	Employee::Employee(const std::string& firstName,
						const std::string& lastName)
		:mFirstName(firstName), mLastName(lastName)
	void Employee::promote(int raiseAmount)
	{
		setSalary(getSalary() + raiseAmount);
	}
	
	void Employee::demote(int demeritAmount)
	{
		setSalary(getSalary() - demeritAmount);
	}
	
	void Employee::hire()
	{
		mHired = true;
	}
	
	void Employee::fire()
	{
		mHired = false;
	}

	void Employee::display() const
	{
		cout << "Emloyee: " << getLastName() << "," << getFirstName() <<endl;
		cout << "--------------------------------------------------"<<endl;
		cout << (isHired()? "Current Employee" : "Former Employee") <<endl;
		cout << "Employee Number: "<< getEmployeeNumber() <<endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl; 
	}
	
	// Getters and setters
	void Employee::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}
	const string& Employee::getFirstName() const
	{
		return mFirstName;
	}
}
