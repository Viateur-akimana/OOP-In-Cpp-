#include<iostream>
using namespace std;

<<<<<<< HEAD
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
=======
class Employee {
>>>>>>> a07e303 (initial commit)
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

<<<<<<< HEAD
int main(){
>>>>>>> b1c0e21 (initial commit)
=======
int main() {
>>>>>>> a07e303 (initial commit)
    Employee employee1;
    employee1.name = "Viateur-akimana";
    employee1.company = "Rwanda coding academy";
    employee1.age = 45;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> a07e303 (initial commit)

    // Call the function to print the introduction
    employee1.getIntroduction();

    return 0; // Indicates successful execution of the program
<<<<<<< HEAD
=======
    cout << employee1.getIntroduction();
>>>>>>> b1c0e21 (initial commit)
=======
>>>>>>> a07e303 (initial commit)
}
