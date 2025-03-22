#include <iostream>
#include <string>
using namespace std;
// Function Overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
// Struct Definition
struct family {
    int age;
    string name;
    bool useHousehold;
};
// Function Template
template <class T>
T product(T a, T b) {
    return a * b;
}
// namespaces
namespace examp{
    string name(){
        return "Betsinat!";
    }
}
namespace num{
    int value(){
        return 10;
    }
}
int main() {
    int x, y, z;
    double c, d, f;
    // Taking input from the user for integer values
    cout << "Enter the first integer you want to add: " << endl;
    cin >> x;
    cout << "Enter the second integer you want to add: " << endl;
    cin >> y;
    cout << "Sum of integers: " << add(x, y) << endl;
    // Taking input from the user for double values
    cout << "Enter the first double you want to add: " << endl;
    cin >> c;
    cout << "Enter the second double you want to add: " << endl;
    cin >> d;
    cout << "Sum of doubles: " << add(c, d) << endl;
    // Call the function template after initializing x, y, c, and d
    z = product<int>(x, y);  // Product of integers
    f = product<double>(c, d);  // Product of doubles
    // Initialize struct variables
    family fam1 = {20, "Betsinat", true};
    family fam2 = {40, "Wendwesen", true};
    family fam3 = {12, "Emanda", false};
    // Displaying struct information
    cout << "Family Member 1 Age: " << fam1.age << ", Name: " << fam1.name << ", Use Household: " << fam1.useHousehold  << endl;
    // Function template outputs
    cout << "Product of integers: " << z << endl;
    cout << "Product of doubles: " << f << endl;
    //namespace outputs
    cout << examp::name() <<endl;
    cout << num::value() <<endl;
    return 0;
}
