#include<iostream>
using namespace std;

class Employee {
protected:
    string company;
    string name;
    int age;
public:
    void setName(string Name) {
        name = Name;

    };
    string getName() {
        return name;
    }
    void setCompany(string Company) {
        company = Company;
    };
    string getCompany() {
        return company;
    }
    void setAge(int Age) {
        age = Age;
    }
    int getAge() {
        return age;
    }
    Employee(string name, string company, int age){
    name= name;
    company = company;
    age = age;
    }
};

class Developer : public Employee {
public:
    string language;
    Developer(string name, string company, int age, string language)
        : Employee(name, company, age) // Initialize the base class constructor using an initialization list
    {
        this->language = language; // Use 'this->' to refer to the member variable of the class
    }

    void favoriteLanguage() {
        cout << "My name is " << name<< ". My favorite language is " <<language << endl;
    }
};

int main() {
    Developer d = Developer("viateur", "RCA", 89, "c++");
    d.favoriteLanguage();
    return 0; // Indicates successful execution of the program
}
