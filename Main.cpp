#include<iostream>
    using namespace std;

    class Employee {
    private:
        string name;
        string company;
        int age;
        public:
        void setName(string Name){
        name = Name;
        };
        string getName(){
        return name;
        }
         void setCompany(string Company){
                company = Company;
                };
          string getCompany(){
                return company;
                };
          void setAge(int Age){
          age = Age;
          }
          int getAge(){
          return age;
          }
    };

    int main() {
        Employee employee1;
        employee1.setName("Viateur");
        employee1.setCompany("RCA");
        employee1.setAge(45);
        cout << "MY name is" << employee1.getName() << "And i work for" << employee1.getCompany() << "I am " << employee1.getAge();

        return 0; // Indicates successful execution of the program
    }
