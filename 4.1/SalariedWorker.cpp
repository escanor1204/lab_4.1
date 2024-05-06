#include "SalariedWorker.h"
SalariedWorker::SalariedWorker(void)
{}
SalariedWorker::SalariedWorker(int exp ,int t, double sal) : Employee(exp ,t)
{
    this->salary = sal;
}
SalariedWorker::~SalariedWorker(void)
{}
double SalariedWorker::calculateSalary() const {
    return salary * (1 + 0.05 * getExperience()); 
}
