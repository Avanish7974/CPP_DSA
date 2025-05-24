#include <iostream>
using namespace std;
// 1. Taking nothing and returning nothing
void is_perfect(){
    int n = 6;
    int sum = 0;
    for(int i = 1; i <= n/2; i++){ 
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
}
void is_perfect2(int n){
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
}
int is_perfect3(){
    int n;
    cout<<"Enter num ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n/2; i++){ 
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        cout << n << " is a perfect number" << endl;
    } else {
         cout << n << " is not a perfect number" << endl;
    }
    return 0;
     
}


int main(){
    cout << "Hello World!" << endl;
    // 1. Taking nothing and returning nothing
    // 2. Taking nothing and returning something
    // 3. Taking something and returning nothing
    // 4. Taking something and returning something

    is_perfect();
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    is_perfect2(n);
    cout<<endl;
    is_perfect3();




    return 0;
}