#pragma once
#include "Employee.h"

class HourlyWorker :
	public Employee

{
private:
	double hourlyRate;

	public:
		HourlyWorker(void);
		HourlyWorker(int exp, int t, double rate);
		~HourlyWorker(void);
		virtual double calculateSalary() const;
	};


