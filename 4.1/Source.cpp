#include <iostream>
#include "SalariedWorker.h"
#include "HourlyWorker.h"
using namespace std;
int main()
{
	SalariedWorker l(25000,0, 30);
	cout << l.calculateSalary() << endl;
	HourlyWorker s(0,60, 180);
	cout << s.calculateSalary() << endl;
	return 0;
}