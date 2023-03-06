// Harman Kaur 
// Assignment 2 CS303
// March 6, 2023

#include "company.h"
#include "sll.h"
#include <iostream>
using namespace std;

int main() {
	cout << "Single Linked List portion of assignment" << endl << endl;
	//declare a new linked list called linkedList and perform functions on it 
	Single_Linked_List<int> linkedList;
	linkedList.push_back(1);
	linkedList.push_back(2);
	linkedList.push_back(3);
	linkedList.push_back(4);
	linkedList.push_back(5);

	linkedList.println();
	cout << endl << endl;

	linkedList.push_front(10);
	linkedList.push_front(20);

	linkedList.println();
	cout << endl << endl;

	linkedList.pop_front();
	linkedList.pop_back();

	linkedList.println();
	cout << endl << endl;

	linkedList.front();
	linkedList.back();

	linkedList.empty();

	linkedList.insert(3, 99);
	linkedList.remove(2);
	linkedList.find(5);

	linkedList.println();
	cout << endl << endl;

	//declare linked list called secondList and perform functions on it 
	Single_Linked_List<int> secondList;
	secondList.push_back(5);
	secondList.push_back(10);
	secondList.push_back(15);

	secondList.println();
	cout << endl << endl;
	
	secondList.push_front(0);
	secondList.push_front(100);

	secondList.println();
	cout << endl << endl;

	secondList.pop_back();
	secondList.pop_front();

	secondList.front();
	secondList.back();

	secondList.println();
	cout << endl << endl;

	secondList.empty();

	cout << secondList.find(50) << endl;

	cout << endl << endl;

	cout << "Class portion of assignment" << endl << endl;

	//create professional employee, pass in salary, name, and employee id
	//perform functions on class
	ProfessionalEmployee h(1000, "Harman", 16235625);
	cout << h.getHealthCareCont() << endl;
	cout << h.getVacationDays() << endl;
	cout << h.getWeeklySalary() << endl;
	cout << h.getmonthlySalary() << endl;

	//create nonprofessional employee, pass in hourly rate, name, and employee id 
	//perform functions on class
	NonprofessionalEmployee n(45, "Navi", 2758459);
	n.setHoursWorked(20);
	cout << n.getHealthCareCont() << endl;
	cout << n.getHourlyRate() << endl;
	cout << n.getHoursWorked() << endl;
	cout << n.getVacationDays() << endl;
	cout << n.getWeeklySalary() << endl;
}