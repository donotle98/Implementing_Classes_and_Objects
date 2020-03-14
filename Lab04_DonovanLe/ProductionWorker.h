#pragma once
#include <iostream>
#include <string>

#include "Employee.h"


// Production worker inherits employee
class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;
public:
	ProductionWorker() {
	}
	ProductionWorker(std::string name, std::string id, std::string hireDate, double hpr, int shift): Employee(name, id, hireDate) {
		setShift(shift);
		setHourlyPayRate(hpr);
	}
	void setShift(int shiftNumber) {
		shift = shiftNumber;
	}
	void setHourlyPayRate(double pay) {
		hourlyPayRate = pay;
	}
	int getShift() {
		return shift;
	}
	double getHourlyPayRate() {
		return hourlyPayRate;
	}
	void getInfo() {
		std::cout << "\nName: " << getEmployeeName() << std::endl;
		std::cout << "ID: " << getEmployeeNumber() << std::endl;
		std::cout << "Hire Date: " << getHireDate() << std::endl;
		std::cout << "Shift: " << getShift() << std::endl;
		std::cout << "Hourly Pay Rate: $" << getHourlyPayRate() << std::endl << std::endl;
	}
};