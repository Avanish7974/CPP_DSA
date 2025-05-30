#include <iostream>
using namespace std;
class product{
    public:
    float selling_price;
    float cost_price;
    void getinfo(){
        cout << "Enter selling price: ";
        cin >> selling_price; // Input for selling price
        cout << "Enter cost price: ";
        cin >> cost_price; // Input for cost price
    }
    void display(){
        cout << "Selling Price: " << selling_price << endl; // Display selling price
        cout << "Cost Price: " << cost_price << endl; // Display cost price
    }
    float profit(){
        return selling_price - cost_price; // Calculate and return profit
    }

    void profit_loss(){
        if(profit()>cost_price){
            cout << " Congrulations you are in Profit of : " << profit() << endl; // Display profit if selling price is greater than cost price
        }
        else if(profit()<cost_price){
            cout << "You are in Loss of : " << -profit() << endl; // Display loss if selling price is less than cost price
        }
    }


};
int main(){
    product p; 
    p.getinfo(); 
    p.display();
    cout << " Net amount is : " << p.profit() << endl; 
    p.profit_loss(); 
    
   
    return 0;
}