#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
	
   
    Employee(const string& empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}

   
    void setSalaryBasedOnPerformance(double performanceFactor) {
        if (performanceFactor > 0) {
            salary *= performanceFactor;
            cout << "Salary updated based on performance. New salary: " << salary << "\n";
        } else {
            cerr << "Error: Invalid performance factor\n";
        }
    }

    
    string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
	
    
    Employee emp("Ritesh Patel", 123456, 50000.0);

 
    std::cout << "Employee Information:\n";
    std::cout << "Name: " << emp.getName() << "\n";
    std::cout << "Employee ID: " << emp.getEmployeeID() << "\n";
    std::cout << "Salary: " << emp.getSalary() << "\n";

    
    double performanceFactor;
    std::cout << "Enter performance factor (greater than 0): ";
    std::cin >> performanceFactor;

    emp.setSalaryBasedOnPerformance(performanceFactor);

    
}

