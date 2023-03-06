#include <iostream>
#include "company.h" 
using namespace std;

//use pointers to pass in data to employee class
Employee::Employee(string name, int employeeID) {
    this->name = name;
    this->employeeID = employeeID;
}

//implement functions for classes 
string Employee::getName() {
    return name;
}
void Employee::setName(string name) {
    this->name = name;
}
int Employee::getEmployeeID() {
    return employeeID;
}
void Employee::setEmployeeID(int employeeID) {
    this->employeeID = employeeID;
}

//dictate vacation days as 25 for salaried employees 
ProfessionalEmployee::ProfessionalEmployee(double monthlySalary, string name, int employeeID) : Employee(name, employeeID) {
    this->monthlySalary = monthlySalary;
    vacationDays = 25;
}

NonprofessionalEmployee::NonprofessionalEmployee(double rate, string name, int employeeID) : Employee(name, employeeID) {
    this->rate = rate;
}

void NonprofessionalEmployee::hourlyRate(double rate) {
    this->rate = rate;
}
double NonprofessionalEmployee::getWeeklySalary() {
    double salary = hoursWorked * rate;
    return salary;
}

//created function for nonprofessional employees for healthcare contribution 
double NonprofessionalEmployee::getHealthCareCont() {
    double salary = hoursWorked * rate;
    double contribution = salary * 0.10;
    return contribution;
}

//create function for nonprofessional employees for vacation days 
int NonprofessionalEmployee::getVacationDays() {
    int vacation = hoursWorked / 20 * 4;
    return vacation;
}
double NonprofessionalEmployee::getHourlyRate() {
    return rate;
}
int NonprofessionalEmployee::getHoursWorked() {
    return hoursWorked;
}
void NonprofessionalEmployee::setHoursWorked(int hoursWorked) {
    this->hoursWorked = hoursWorked;
}

double ProfessionalEmployee::getWeeklySalary() {
    double weeklySalary = monthlySalary / 4;
    return weeklySalary;
}
double ProfessionalEmployee::getHealthCareCont() {
    double contribution = monthlySalary * 0.10;
    return contribution;
}
int ProfessionalEmployee::getVacationDays() {
    return vacationDays;
}
double ProfessionalEmployee::getmonthlySalary() {
    return monthlySalary;
}
void ProfessionalEmployee::setmonthlySalary(double monthlySalary) {
    this->monthlySalary = monthlySalary;
}