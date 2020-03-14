#include <iostream>
#include <string>
#include "TeamLeader.h"
#include "ShiftSupervisor.h"
#include "Employee.h"
#include "ProductionWorker.h"


int main() {
	// Creates an Employee object
	Employee newEmployee;
	std::cout << "Enter information in this order: name, ID, hire date(ex. 01-19-1989)" << std::endl;
	std::string name, id, hireDate;
	std::cin >> name >> id >> hireDate;
	newEmployee.setEmployeeName(name);
	newEmployee.setEmployeeNum(id);
	newEmployee.setHireDate(hireDate);
	newEmployee.displayEmployee();

	// Creates a Production Worker object, inherits Employee class
	ProductionWorker newProd;
	std::cout << "\n\nProduction Worker" << std::endl;
	std::cout << "=================" << std::endl;
	std::cout << "Enter information in this order: name, ID, hire date(ex. 01-19-1989), hour pay rate, shift number(1 = Day, 2 = Night)" << std::endl;
	double hpr;
	int shiftNum;
	std::cin >> name >> id >> hireDate >> hpr >> shiftNum;
	newProd.setEmployeeName(name);
	newProd.setEmployeeNum(id);
	newProd.setHireDate(hireDate);
	newProd.setShift(shiftNum);
	newProd.setHourlyPayRate(hpr);
	newProd.getInfo();

	// Dynamic overriding
	Employee *newPSsp = new ShiftSupervisor;
	newPSsp->setEmployeeName("Jon");
	newPSsp->setEmployeeNum("7618");
	newPSsp->setHireDate("10-10-1910");
	newPSsp->displayEmployee();
	delete newPSsp;

	// Creates a Shift Supervisor object, inherits Employee class
	ShiftSupervisor newSup;
	std::cout << "\n\nShift Supervisor" << std::endl;
	std::cout << "================" << std::endl;
	std::cout << "Enter information in this order: name, ID, hire date(ex. 01-19-1989), annual salary, end-of-the-year bonus" << std::endl;
	double annSalary, EOTYBonus;
	std::cin >> name >> id >> hireDate >> annSalary >> EOTYBonus;
	newSup.setEmployeeName(name);
	newSup.setEmployeeNum(id);
	newSup.setHireDate(hireDate);
	newSup.setAnnualSalary(annSalary);
	newSup.setBonus(EOTYBonus);
	newSup.getSupervisorInfo();

	//Creates a Team Leader object, inherits Production Worker class due to having a Hourly Pay Rate
	TeamLeader newLeader;
	std::cout << "\n\nTeam Leader" << std::endl;
	std::cout << "===========" << std::endl;
	std::cout << "In this order: name, ID, hire date(ex. 01-19-1989), hourly pay rate, shift (1=Day, 2=Night)," <<
		" monthly bonus, required training hours,\n completed training hours" << std::endl;
	double monthBonus, rth, cth;
	std::cin >> name >> id >> hireDate >> hpr >> shiftNum >> monthBonus >> rth >> cth;
	newLeader.setEmployeeName(name);
	newLeader.setEmployeeNum(id);
	newLeader.setHireDate(hireDate);
	newLeader.setShift(shiftNum);
	newLeader.setHourlyPayRate(hpr);
	newLeader.setMonthlyBonus(monthBonus);
	newLeader.setRequiredTH(rth);
	newLeader.setCompletedTH(cth);
	newLeader.getTeamLeaderInfo();


	system("break");
	return 0;
}