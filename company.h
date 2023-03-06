#include <iostream>
#include <string>
using namespace std;

//create parent class called employee
//create getters and setters related to parent class 
//set virtual functions and declare them to 0
class Employee {
public:
    string getName();
    void setName(string name);
    int getEmployeeID();
    void setEmployeeID(int employeeID);

    double virtual getWeeklySalary() = 0;
    double virtual getHealthCareCont() = 0;
    int virtual getVacationDays() = 0;

    Employee(string name, int employeeID);

private:
    string name;
    int employeeID;
};

//create child class of professional employee from employee class
//pass in items that relate to professional emplyoee class
//ex. monthly salary, healthcare cont, and vacation days 
class ProfessionalEmployee : public Employee {
public:
    void setmonthlySalary(double monthlySalary);
    double getmonthlySalary();

    double getWeeklySalary() override;
    double getHealthCareCont() override;
    int getVacationDays() override;

    ProfessionalEmployee(double monthlySalary, string name, int employeeID);

private:
    int vacationDays;
    double monthlySalary;
};


//create child class of nonprofessional employee from employee class
//pass in items that relate to nonprofessional employee
//ex. hourly rate, get hours worked, weekly salary, healthcare cont, and vacation days 
class NonprofessionalEmployee : public Employee {
public:
    void hourlyRate(double rate);
    double getHourlyRate();
    int getHoursWorked();
    void setHoursWorked(int hoursWorked);

    double getWeeklySalary() override;
    double getHealthCareCont() override;
    int getVacationDays() override;

    NonprofessionalEmployee(double rate, string name, int employeeID);

private:
    double rate;
    int hoursWorked;
};