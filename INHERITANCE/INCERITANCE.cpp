// // Explain Inheritance in C++:
// // inheritance in c++ is a mechanism in which one class acquires the properties and behaviors of another class. 
// // The class that acquires these properties and behaviors is called the derived class (child class) and the class from

// // types of inheritance:
// 1. Single Inheritance: A derived class can inherit only one base class.
// 2. Multiple Inheritance: A derived class can inherit from multiple base classes.
// 3. Multilevel Inheritance: A derived class can inherit from a base class that in turn inherits from another base class.
// 4. Hierarchical Inheritance: A derived class can inherit from more than one base class, but each base class can only inherit from one other base class.
// 5. Hybrid Inheritance: A derived class can inherit from a base class that in turn inherits from another base class, and it can also inherit from multiple other base classes.

// 1. in inheritance first default constructor of base class will be called before constructor of derived class.
// 2. but in case of multiple inheritance, constructors of all base classes will be called in the order they are listed
//     in the derived class.
// 3. but in the destructor order, destructors of base classes will be called in the reverse order they were listed
//     in the derived class.
// 4. if there is parameterized  we call first by method then default constructor not called        
// // Advantages of Inheritance:
// 1. Code Reusability: Inheritance allows us to reuse the code and properties of the base class in the derived class.
// 2. Encapsulation: Inheritance promotes encapsulation by hiding the implementation details of the base class and providing a controlled interface for accessing and modifying the derived class's data members.
// 3. Modularity: Inheritance allows us to modularize the code by separating the related classes into different base classes and derived classes.
// 4. Flexibility: Inheritance allows us to extend the functionality of the base class by adding new members and functions to the derived class.

// // Syntax for Inheritance in C++:
// // 1. Single Inheritance syntax:
//    class DerivedClassName : public BaseClassName {
//    // Member declarations and methods
//    };
//    // Example:
//    class Student : public Person {
//    public:
//    int rollNo;
//    };
//    // 2. Multiple Inheritance syntax:
//    class DerivedClassName : public BaseClassName1, public BaseClassName2 {
//    // Member declarations and methods
//    };
//    // Example:
//    class Employee : public EmployeeInfo, public Address {
//    public:
//    int employeeID;
//    };
//    // 3. Multilevel Inheritance syntax:
//    class DerivedClassName : public BaseClassName1 {
//    public:
//    // Member declarations and methods
//    };
//    class BaseClassName1 : public BaseClassName2 {
//    // Member declarations and methods
//    };
//    class BaseClassName2 {
//    // Member declarations and methods
//    };
//    // Example:
//    class Manager : public Employee, public Department {
//    public:
//    int managerID;
//    };
//    // 4. Hierarchical Inheritance syntax:
//    class DerivedClassName : public BaseClassName1 {
//    public:
//    // Member declarations and methods
//    };
//    class BaseClassName1 {
//    // Member declarations and methods
//    };
//    class BaseClassName2 {
//    // Member declarations and methods
//    };
//    // Example:
//    class Employee : public BaseClassName1 {
//    public:
//    int employeeID;
//    };
//    class Department : public BaseClassName2 {
//    public:
//    string departmentName;
//    };
//    // 5. Hybrid Inheritance syntax:
//    class DerivedClassName : public BaseClassName1, public BaseClassName2 {
//    public:
//    // Member declarations and methods
//    };
//    class BaseClassName1 : public BaseClassName3 {
//    // Member declarations and methods
//    };
//    class BaseClassName2 : public BaseClassName4 {
//    // Member declarations and methods
//    };
//    class BaseClassName3 {
//    // Member declarations and methods
//    };
//    class BaseClassName4 {
//    // Member declarations and methods
//    };
//    // Example:
//    class Employee : public EmployeeInfo, public Address {
//    public:
//    int employeeID;
//    };
//    class Manager : public Employee, public Department {
//    public:
//    int managerID;
//    };