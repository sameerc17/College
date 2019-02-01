// Make a class employee with a name and salary. Make a class manager inherit form employee. An
// instance variable, named department, of type string. Supply a method to string that prints managers
// name, department and salary. Make a class executive inherit from manager. Supply a method to a
// string that print the string “executive” follow by the information stored in the manager super class
// object. Supply a test programme that test these classes and methods.

#include <iostream>
#include <string>
class Employee {
protected:
int salary;
std::string name;
public:
Employee(std::string name, int salary) : name(name), salary(salary) {}
};
class Manager : public Employee {
protected:
std::string department;
public:
Manager(std::string name, int salary, std::string department) : Employee(name, salary),department(department) {}
void print() {
_print("_________Manager__________");
}
void _print(std::string type) {
std::cout << type << std::endl;
std::cout << "Name : " << name << std::endl;
std::cout << "Salary : " << salary << std::endl;
std::cout << "Department : " << department << std::endl <<std::endl;
}
};
class Executive : public Manager {
public:
Executive(std::string name, int salary, std::string department): Manager(name, salary,department) {}
void print() {
_print("________Executive__________");
}
};
int main() {
Manager m("Rajeev", 12000, "CS");
m.print();
Executive e("Navneet", 14000, "IT");
e.print();
}