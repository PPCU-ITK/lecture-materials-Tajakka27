#include <iostream>
#include <vector>
#include <string>
using namespace std;

// TODO: TASK 1 - Define the 'Product' struct/class here
// 1. **Name**: Text (e.g., "Screen").  
// 2. **Price**: A floating-point number.  
// 3. **Quantity**: An integer.
class Product
{
public:
     string name;
     float price;
     int quantity;

     Product(string n, float p, int q): name(n), price(p), quantity(q){ }
};

double calculateTotalValue (const vector<Product>& v){
    double sum=0;
    for(const auto item: v)
    {
        sum+=item.price*item.quantity;
    
    }
    return sum;
}
// TODO: TASK 3 - Write 'calculateTotalValue' here
// Note: Pay close attention to the argument type!

// TODO: TASK 4 - Write 'findLowStock' here
void findLowStock(const vector<Product>& v, int threshold)
{
    for(const auto item: v)
    {
        if (item.quantity<threshold)
        {
            cout<<item.name<<endl;
        }
    
    }
}

int main() {
    // TODO: TASK 2 - Create the 'inventory' vector and add items
    Product p1("Laptop", 999.99, 5 ),p2("Mouse", 19.50, 50),p3("Monitor", 150.00, 2);
    std::vector<Product> inventory;
    inventory.push_back(p1);
    inventory.push_back(p2);
    inventory.push_back(p3);

    // Testing Task 3
    double total = calculateTotalValue(inventory);
    std::cout << "Total Inventory Value: $" << total << std::endl;

    // Testing Task 4
    std::cout << "Low Stock Items:" << std::endl;
    // call the findLowStock function here with a threshold of 10
    findLowStock(inventory,10);
    return 0;
}