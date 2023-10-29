#include<iostream>
using namespace std;

class Employee {
public:
    string name;
    string company;
    int age;

    void getIntroduction() {
        cout << "Name of the employee: " << name << endl;
        cout << "Company of the employee: " << company << endl;
        cout << "Age of the employee: " << age << endl;
    }
};

int main() {
    Employee employee1;
    employee1.name = "Viateur-akimana";
    employee1.company = "Rwanda coding academy";
    employee1.age = 45;

    // Call the function to print the introduction
    employee1.getIntroduction();

    return 0; // Indicates successful execution of the program
}
