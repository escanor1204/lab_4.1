#pragma once
class Employee
{
    int experience;
    int time;

    public:
    
      Employee(void);
      Employee(int exp, int t);
      int getExperience() const { return experience; }
      int getTime() const { return time; };
      ~Employee(void);

      virtual double calculateSalary() const = 0;

};

