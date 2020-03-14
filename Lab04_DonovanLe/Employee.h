#pragma once
#include <iostream>
#include <string>

class Employee {
private:
	std::string employeeNumber;
	std::string employeeName;
	std::string hireDate;
public:
	Employee() {
		std::cout << "Input information about the Employee: " << std::endl;
	}
	Employee(std::string n, std::string id) {
		setEmployeeName(n);
		setEmployeeNum(id);
	}
	Employee(std::string name, std::string id, std::string hiredate) {
		setEmployeeName(name);
		setEmployeeNum(id);
		setHireDate(hireDate);
	}
	void setEmployeeNum(std::string num) {
		this->employeeNumber = num;
	}
	void setEmployeeName(std::string name) {
		this->employeeName = name;
	}
	void setHireDate(std::string date) {
		this->hireDate = date;
	}
	std::string getEmployeeNumber() {
		return employeeNumber;
	}
	std::string getEmployeeName() {
		return employeeName;
	}
	std::string getHireDate() {
		return hireDate;
	}
	virtual void displayEmployee() {
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Name: " << getEmployeeName() << std::endl;
		std::cout << "ID: " << getEmployeeNumber() << std::endl;
		std::cout << "Hire Date: " << getHireDate() << std::endl;
	}
};