//Database.cc 
#include <iostream>
#include <string>
#include "Database.h"
#include "Employee.h"
using namespace std;

namespace Records {
	Employee& Database::addEmployee(const string& firstName,
									const string& lastName)
	{
		Employee theEmployee(firstName, lastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1];
	}

	Employee& Database::getEmployeeNumber(int employeeNumber)
	{
		for(auto& employee : mEmployees) {
			if (employee.getEmployeeNumber() == employeeNumber){
				return employee;
			}
		}
		throw logic_error("No employee found.");
	}
	
	void Database::displayAll() const
	{
		for(const auto& employee : mEmployees){
			employee.dispaly();
		}
	}
	
	void Database::displayCurrent() const
	{
		for (const auto& employee :mEmployees) {
			if (employee.isHire())
				employee.display();
		}
	}
}
