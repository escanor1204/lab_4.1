#include "HourlyWorker.h"
HourlyWorker::HourlyWorker(void)
{}
HourlyWorker::HourlyWorker(int exp, int t, double rate) : Employee(exp, t) 
{
  this->hourlyRate = rate;
}
HourlyWorker::~HourlyWorker(void)
{}
double HourlyWorker::calculateSalary() const {
    return hourlyRate * getTime(); 
}

