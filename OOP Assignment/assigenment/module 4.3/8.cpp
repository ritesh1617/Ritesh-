#include<iostream>
#include<string>
using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
    string zipCode;

    // Constructor to initialize address
    Address(const std::string& s, const std::string& c, const std::string& st, const std::string& zip)
        : street(s), city(c), state(st), zipCode(zip) {}
};

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    double marks;
    Address studentAddress;  // Aggregation: Student class has an Address object

public:
    // Constructor to initialize name, class, roll number, marks, and address
    Student(const string& n, const string& cls, int roll, double m, const Address& addr)
        : name(n), className(cls), rollNumber(roll), marks(m), studentAddress(addr) {}

    // Member function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    // Member function to display student information
    void displayInformation() const {
        cout << "Student Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Class: " << className << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Grade: " << calculateGrade() << "\n";
        cout << "Address: " << studentAddress.street << ", " << studentAddress.city << ", "
                  << studentAddress.state << " - " << studentAddress.zipCode << "\n";
    }
};

int main() {
    // Creating an instance of the Address class for each student
    Address address1("123 Main St", "Cityville", "Stateville", "12345");
    Address address2("456 Oak St", "Townsville", "Stateville", "67890");

    // Creating instances of the Student class using aggregation
    Student student1("Ritesh", "12th", 101, 95.5, address1);
    Student student2("Jay", "11th", 202, 82.0, address2);

    // Displaying student information
    student1.displayInformation();
    cout << "\n";
    student2.displayInformation();

  
}

