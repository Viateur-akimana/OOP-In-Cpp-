#include<iostream>
using namespace std;

<<<<<<< HEAD
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
=======
class Employee
{
public:
   string name;
   string company;
   int age;
   int getIntroduction(){
    cout << "Name of the employee-" << name <<endl;
    cout << "Company of the employee-" << company << endl;
    cout << "Age of the employee" << age << endl;
   };
};

int main(){
>>>>>>> b1c0e21 (initial commit)
    Employee employee1;
    employee1.name = "Viateur-akimana";
    employee1.company = "Rwanda coding academy";
    employee1.age = 45;
<<<<<<< HEAD

    // Call the function to print the introduction
    employee1.getIntroduction();

    return 0; // Indicates successful execution of the program
=======
    cout << employee1.getIntroduction();
>>>>>>> b1c0e21 (initial commit)
}
