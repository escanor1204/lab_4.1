#pragma once
#include "Employee.h"
class SalariedWorker : public Employee
{
	double salary; // Оклад
public:
	SalariedWorker(void);
	SalariedWorker(int exp, int t, double sal);
	~SalariedWorker(void);
	double calculateSalary() const;
};

