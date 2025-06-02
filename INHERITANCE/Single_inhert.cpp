#include <iostream>
using namespace std;
// program for single inheritance with constructor and destructor
class RGPV{
    public:
    string uname;
    int ucode;
    // Default constructor for RGPV class, which is called when an object of RGPV class is created without any arguments.
    RGPV(){
        cout<<"\n RGPV Default Constructor Called ";
    }
    // parametrized constructor for RGPV class, which is called when an object of RGPV class is created with arguments.
    RGPV(string un, int uc){
        uname = un;
        ucode = uc;
        cout<<"\n RGPV Parametrized Constructor Called ";
    }
    // Destructor for RGPV class, which is called when an object of RGPV class is destroyed.

    ~RGPV(){
        cout<<"\n RGPV Destructor  Called ";
    }

    void getinfo(){
        cout<<"\nEnter University Name : ";
        cin>>uname;
        cout<<"\nEnter University Code : ";
        cin>>ucode;
    };


    

};

class Student: public RGPV{
    public:
    int roll;
    string name;
    void acceptdata(){
        getinfo();
        cout<<"\nEnter Student Name : ";
        cin>>name;
        cout<<"\nEnter Roll Number : ";
        cin>>roll;
    }
    void display(){
        cout<<"\nUniversity Name : "<<uname;
        cout<<"\nUniversity Code : "<<ucode;
        cout<<"\nStudent Name : "<<name;
        cout<<"\nRoll Number : "<<roll;
    }
    Student(){
        cout<<"\nStudent Default Constructor Called ";
    }
    ~Student(){
        cout<<"\nStudent Destructor Called ";
    }
};    
int main(){
    Student s;
    s.acceptdata();
    s.display();
    
   
    return 0;
}