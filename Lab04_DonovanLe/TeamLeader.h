#pragma once
#include <iostream>
#include <string>

#include "Employee.h"
#include "ProductionWorker.h"

// Teamleader inherits production worker
class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	double reqTrainingHours;
	double compTrainingHours;
public:
	TeamLeader() {
	}
	TeamLeader(std::string name, std::string id, std::string hireDate, double hourPayRate, int shift, double monthBonus, 
		double rth, double cth):ProductionWorker(name, id, hireDate, hourPayRate, shift)
	{
		setMonthlyBonus(monthBonus);
		setRequiredTH(rth);
		setCompletedTH(cth);
	}
	void setMonthlyBonus(double mb) {
		this->monthlyBonus = mb;
	}
	void setRequiredTH(double thours) {
		this->reqTrainingHours = thours;
	}
	void setCompletedTH(double cthours) {
		this->compTrainingHours = cthours;
	}
	double getMonthlyBonus() {
		return monthlyBonus;
	}
	double getRequiredTH() {
		return reqTrainingHours;
	}
	double getCompletedTH() {
		return compTrainingHours;
	}
	void getTeamLeaderInfo() {
		getInfo();
		std::cout << "Monthly Bonus: $" << getMonthlyBonus() << std::endl;
		std::cout << "Required Training Hours: " << getRequiredTH() << std::endl;
		std::cout << "Completed Training Hours: " << getCompletedTH() << std::endl;
	}
};