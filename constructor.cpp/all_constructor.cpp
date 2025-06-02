#include<iostream>
using namespace std;

class Student{
    string name;// getName()  setName()
    string enroll;// getEnroll()  setEnroll()
    char s;// getS()     setS()
    int p;// getP()      setP()
    int c;// getC()      setC()
    int m;// getM()      setM()
    int h; // getH()     setH()
    int e; // getE()     setE()
    public:
    
        Student(){
            cout<<"\n Default constructor is called ";
        }
        Student(string n,string e,char se,int p1,int m1,int c1,int h1,int e1){
            name=n;
            enroll=e;
            s=se;
            p=p1;
            m=m1;
            c=c1;
            h=h1;
            e=e1;
            cout<<"\n Parameterized constructor is called ";
        }
       
~Student(){          // Destructor to free dynamically allocated memory when object goes out of scope.
      // This destructor is called when an object of Student class is destroyed. 
       // It is called automatically when the memory space
    cout<<"\n Student class Destructor is called ";
}        
};
int main(){
    Student s; // Default constructor is called
    Student s1("Deepak","CS123",'A',56,78,90,78,90);  // Parameterized constructor is called

    return 0;
}