#include <iostream>
using namespace std;
void add(){
    int n1,n2,n3;
    cout<<"Enter First Number:\n ";
    cin>>n1;
    cout<<"Enter Second Number: ";
    cin>>n2;
    n3 = n1 + n2;
    cout<<"Sum is: "<<n3<<endl;
}

int main(){
    add();
    
    // main(); // here main function is called again
    

    return 0;
}
// main();
    // here main function is called again
    // this is an infinite recursion
    // and this will cause stack overflow