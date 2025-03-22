#include <iostream>
#include <string>
using namespace std;
struct family {
    int age;
    string name;
    bool useHousehold;
};
int main(){  
    family fam1 = { 20, "Betsinat", true };
    family fam2 = { 45, "Wendwesen", true };
    family fam3 = { 12, "Emanda", false };

    cout << "Age: " << fam1.age << endl;
    cout << "Name: " << fam1.name << endl;
    cout << "Use Household: " << fam1.useHousehold << endl;
    return 0;
}