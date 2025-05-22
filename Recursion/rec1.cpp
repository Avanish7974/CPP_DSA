#include <iostream>
using namespace std;
void add(){
    int a = 10;
    int b = 20;
    cout << "Sum is: " << a + b << endl;
}
int add1(int a=10,int b=40) // default values are given
// here inta and b are the parameters
{
    int sum = a + b;
    return sum;
}
// main function is the entry point of the program
// and the main function is called by the operating system
int main(){

    cout << "Hello World!" << endl;
    add();
    int x = 20;
    int y = 20;
    cout<<add1();
    //  here default values are used 
    cout<<add1(x,y); // here x and y are used
    cout<<add1(30); // here 30 is used and b is default
    cout<<add1(30,40); // here 30 and 40 are used
    // here 30 is used and b is default

    return 0;
}
