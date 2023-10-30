#include<iostream>
using namespace std;

class Employee {
public:
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

class Developer : Employee {
public:
    string language;
    Developer(string name, string company, int age, string language)
        : Employee(name, company, age) // Initialize the base class constructor using an initialization list
    {
        this->language = language; // Use 'this->' to refer to the member variable of the class
    }

    void fixBug() {
        cout << "My name is " << name << ". My favorite language is " <<language << endl;
    }
};
class Teacher:Employee{
public:
string lesson;

Teacher(string name, string company, int age, string lesson):
Employee(name,company,age){

}
void prepareLesson(){
cout <<name << "is preparing the exam of " << lesson <<endl;
}
};

int main() {
    Developer d = Developer("linter", "RCA", 89, "c++");
     Teacher t = Teacher("linter", "RCA", 89, "c++");
     d.fixBug();
    return 0; // Indicates successful execution of the program
}
