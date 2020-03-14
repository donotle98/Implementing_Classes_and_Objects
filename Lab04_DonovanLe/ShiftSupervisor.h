#pragma once
#include <iostream>
#include <string>

#include "Employee.h"

// Shift supoervisor inherits employee
class ShiftSupervisor : public Employee {
private:
	double annualSalary;
	double bonus;
public:
	ShiftSupervisor() {
	}
	ShiftSupervisor(std::string name, std::string id, std::string hireDate, double annSalary, double bonus):Employee(name, id, hireDate) {
		setAnnualSalary(annSalary);
		setBonus(bonus);
	}
	void setAnnualSalary(double s) {
		this->annualSalary = s;
	}
	void setBonus(double b) {
		this->bonus = b;
	}
	double getAnnualSalary() {
		return annualSalary;
	}
	double getBonus() {
		return bonus;
	}
	void getSupervisorInfo() {
		displayEmployee();
		std::cout << std::endl;
		std::cout << "Annual Salary: $" << getAnnualSalary() << std::endl;
		std::cout << "End-of-the-year Bonus: $" << getBonus() << std::endl << std::endl;
	}
	// Using dynamic overriding
	void displayEmployee() {
		std::cout << "\nInformation has been inputted for you..." << std::endl;
		std::cout << std::endl;
		std::cout << "Name: " << getEmployeeName() << std::endl;
		std::cout << "ID: " << getEmployeeNumber() << std::endl;
		std::cout << "Hire Date: " << getHireDate() << std::endl;
	}
};