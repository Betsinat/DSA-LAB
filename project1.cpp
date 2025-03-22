#include <iostream>
#include <string>
#define TAX_RATE 0.15
using namespace std;
int main(){
    //declaring variables with there respective data type.
    string product_name;
    string inventory_status;
    int product_category;
    int intial_quantity;
    int num_of_sales;
    int new_inventory;
    float total_sales;
    float price_per_unit;
    const double tax_rate = 0.15;
    //executing output statements as required in step no. 1
    cout<<"This program analyzes product sales and inventory of stores."<<endl;
    cout<<"C++ is compiled language."<<endl;
    cout<<"please enter the product name:"<<flush;
    cin>>product_name; // asking input values from the user
    cout<<"please enter the product category(in numbers):"<<flush;
    cin>>product_category;
    if (product_category < 1|| product_category > 5){
        cout<<"enter a value between 1 and 5!"<<endl;
        return 1;
        }// limiting the user to enter the value of product category from 1 to 5 only.
    cout<<"please enter the intial inventory quantity:"<<flush;
    cin>>intial_quantity;
    cout<<"please enter the product price"<<flush;
    cin>>price_per_unit;
    cout<<"please enter the number of items sold"<<flush;
    cin>>num_of_sales;
    // writing operational expression as given.
    new_inventory = intial_quantity - num_of_sales;
    total_sales = price_per_unit * num_of_sales;
    //initializing helper variables as required.
    auto copy = total_sales;
    decltype(intial_quantity) inventory_helper_variable = new_inventory;
    int i;
    for(i=1;i<=num_of_sales;i++){
        cout<<"Item"<<i<<":"<<price_per_unit<<endl;
    }//writing the list of number of sales with their respective price
    inventory_status = (new_inventory < 10) ? "Low Inventory" : "Sufficient Inventory";
     cout << "Inventory Status: " << inventory_status << endl;//classifying inventory status based on the new inventory value
    switch(product_category){
        case 1:cout<<"Category 1: Electronics"<<endl;break;
        case 2:cout<<"Category 2: Groceries"<<endl;break;
        case 3:cout<<"Category 3: Clothing"<<endl;break;
        case 4:cout<<"Category 4: Stationery"<<endl;break;
        case 5:cout<<"Category 5: Miscellaneous"<<endl;break;
    }// classifying product based on the entered value of product category
    cout<<"Product name:"<<product_name<<endl;
    cout<<"Product category:"<<product_category<<endl;
    cout<<"Intial inventory:"<<intial_quantity<<endl;
    cout<<"Price per unit:"<<price_per_unit <<"ETB"<<endl;
    cout<<"Number of items sold:"<<num_of_sales<<endl;
    cout<<"New inventory:"<<new_inventory << "ETB"<<endl;
    cout<<"Total sales amount:"<<total_sales<<"ETB"<<endl;
    cout<<"Inventory status:"<<inventory_status<<endl;
    cout << "Tax Rate (Preprocessor constant): " << TAX_RATE << "ETB" << endl;
    cout << "Tax Rate (const variable): " << tax_rate << "ETB" << endl;
    float tax_amount = total_sales * TAX_RATE;
    float total_after_tax = total_sales + tax_amount;
    cout << "Total sales amount after tax: " << total_after_tax << " ETB" << endl;
    cout << "Total Sales amount-copy: " << copy << endl;
    cout << "intial inventory-Inventory Helper variable: " << inventory_helper_variable << endl;
    //executing output
return 0;
}
