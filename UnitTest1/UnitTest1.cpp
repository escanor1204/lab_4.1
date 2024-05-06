#include "pch.h"
#include "CppUnitTest.h"
#include "../4.1/HourlyWorker.cpp"
#include "../4.1/SalariedWorker.cpp"
#include "../4.1/Employee.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			HourlyWorker hourlyWorker(0,60, 180); // Створення об'єкту класу HourlyWorker зі стажем 3 роки та погодинною ставкою 20.0

			// Act
			double salary = hourlyWorker.calculateSalary();

			// Assert
			Assert::AreEqual(0,( 60*180 ), salary);
		}
	};
}
