#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    string job;
    float salary;
    int dept_id;
    // Member function to get employee information
    void getinfo(){
        cout << "Enter employee name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, name); // Read full name including spaces
        cout << "Enter job title: ";
        getline(cin, job); // Read job title
        cout << "Enter salary: ";
        cin >> salary; // Read salary
        cout << "Enter department ID: ";
        cin >> dept_id; // Read department ID
    }
    // Member function to display employee information
    void display(){
        cout << "Employee Name: " << name << endl;
        cout << "Job Title: " << job << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department ID: " << dept_id << endl;
    }
    float getHRA() {
        return salary * 0.2; // Calculate HRA as 20% of salary
    }
    float getDA() {
        return salary * 0.1; // Calculate DA as 10% of salary
    }   
    float getTA() {
        return salary * 0.1; // Calculate TA as 5% of salary
    }
    float getincentive() {
        return getHRA() + getDA() + getTA(); // Calculate total incentive

    }
    float GrossSalary() {
        return salary + getincentive(); // Calculate gross salary
    }

};
int main(){
    employee emp; // Create an instance of employee class
    emp.getinfo(); // Get employee information from user
    emp.display(); // Display employee information
    cout << "HRA: " << emp.getHRA() << endl; // Display HRA
    cout << "DA: " << emp.getDA() << endl; // Display DA
    cout << "TA: " << emp.getTA() << endl; // Display TA
    cout << "Total Incentive: " << emp.getincentive() << endl; // Display total incentive
    cout << "Gross Salary: " << emp.GrossSalary() << endl; // Display gross salary

   
    return 0;
}