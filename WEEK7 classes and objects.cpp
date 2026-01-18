#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // constructor
    Employee(string n, int a, int sy, double s) : name(n), age(a), serviceYear(sy), salary(s) {}

    // destructor
    ~Employee() {}

    //Accessor functions
    string getName() const { return name; }
    int getAge() const { return age; }
    int getServiceYear() const { return serviceYear; }
    double getSalary() const { return salary; }
};
int main()
 {
    Employee emp("Talia Auma", 26, 4, 70000.0);
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Employee Service Years: " << emp.getServiceYear() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    return 0;
}