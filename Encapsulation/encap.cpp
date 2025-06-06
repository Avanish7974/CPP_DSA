// Encapsulation in cpp the rules of encapsulation are:

// 1. Data hiding: The data members of a class should be declared as private and accessed through public member functions.
// 2. Access specifiers: Private members can only be accessed within the class and not from outside the class.
// 3. Getter and setter functions: Getter functions are used to retrieve the value of a private member,
//  while setter functions are used to modify the value of a private member.
// 4. Encapsulation ensures data integrity and security by hiding the implementation details of the class.
// 5. It allows the class to provide a controlled interface for accessing and modifying its data members.
// 6. Encapsulation promotes code reusability and maintainability by encapsulating related data and operations together.

// Here is an example of encapsulation in C++ using getter and setter functions:
#include <iostream>
using namespace std;
// here is an example of encapsulation in C++ using getter and setter functions:
class Student {
    public:
    // here in encapsulation we using private data members and providing getter and setter functions to access them.
    // if we not use private members we can directly access them from outside the class.
        string name;
        int age;
        char section;
        int roll_number;
        int physics;
        int chemistry;
        int mathematics;
    public:
        // Getter functions
        // here get and set functions to access and modify private data members.

        string getName() { return name; }
        // here we creating getname() to access name.
        int getAge() { return age; }
        char getSection() { return section; }
        int getRollNumber() { return roll_number; }
        int getPhysics() { return physics; }
        int getChemistry() { return chemistry; }
        int getMathematics() { return mathematics; }
        // Setter functions
        // // in setter function we use void keyword to modify private data members.
        // void setDetails(string n, int a, char s, int r, int p, int c, int m) {
        //     name = n;
        //     age = a;
        //     section = s;
        //     roll_number = r;
        //     physics = p;
        //     chemistry = c;
        //     mathematics = m;
        // }
        // int main() {
        //     Student s;
        //     s.setDetails("John Doe", 18, 'A', 123, 90, 85, 95);
        //     cout << "Name: " << s.getName() << endl;
        //     cout << "Age: " << s.getAge() << endl;
        //     cout << "Section: " << s.getSection() << endl;
        //     cout << "Roll Number: " << s.getRollNumber() << endl;
        //     cout << "Physics: " << s.getPhysics() << endl;
        //     cout << "Chemistry: " << s.getChemistry() << endl;
        //     cout << "Mathematics: " << s.getMathematics() << endl;
        //     return 0;
        // }
        // the structure of the setter function is void, as it doesn't return any value.


        void setName(string n) { name = n; }
        void setAge(int a) { age = a; }
        void setSection(char s) { section = s; }
        void setRollNumber(int r) { roll_number = r; }
        void setPhysics(int p) { physics = p; }
        void setChemistry(int c) { chemistry = c; }
        void setMathematics(int m) { mathematics = m; }
};

int main(){
    Student s;
    s.setName("John Doe");
    s.setAge(18);
    s.setSection('A');
    s.setRollNumber(123);
    s.setPhysics(90);
    s.setChemistry(85);
    s.setMathematics(95);
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Section: " << s.getSection() << endl;
    cout << "Roll Number: " << s.getRollNumber() << endl;
    cout << "Physics: " << s.getPhysics() << endl;



   
    return 0;
}