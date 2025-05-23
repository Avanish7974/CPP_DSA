#include<iostream>
using namespace std;
int add(){
    int n1,n2,n3;
    cout<<"\nEnter First Number: ";
    cin>>n1;
    cout<<"\nEnter Second Number: ";
    cin>>n2;
    n3=n1+n2;
    return n3;
}
int main(){
    cout<<"\n Addition : "<<add();
    int r = add();
    cout<<"\n Addition : "<<r;



    return 0;
}