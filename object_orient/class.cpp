#include <iostream>
using namespace std;
class operation{
public: // Public access specifier allows members to be accessible outside the class    
    int n1,n2;

};
// the access specifier of the class is private by default, so the members of the class are not accessible outside the class.
int main(){
    operation op; // Creating an object of the class operation
    cout<<op.n1<<endl; // Trying to access the member n1 of the class operation
    cout<<op.n2<<endl; // Trying to access the member n2 of the class operation
    // Since n1 and n2 are not initialized, they will contain garbage values.
    // This will print some random values.

  



    

    return 0;
}