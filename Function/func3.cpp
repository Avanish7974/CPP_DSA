#include<iostream>
using namespace std;
int add(){
    int n1,n2,n3;
    cout<<"\nEnter First Number: ";
    cin>>n1;
    cout<<"\nEnter Second Number: ";
    cin>>n2;
    n3=n1+n2;
    cout<<"\nSum is: "<<n3<<endl;
    return n3;
}
int main(){
    cout << "Hello World!" << endl;
    cout<<"Ans is "<<add()<<endl; // Calling the add function



    return 0;
}