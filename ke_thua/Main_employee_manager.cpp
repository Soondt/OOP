#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        int salary;
    public:
        Employee(string name , int salary)
        {
            this -> name = name;
            this ->salary = salary;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this -> salary = salary;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this ->name = name;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee{
    private: 
        int bonus;
    public:
        
        Manager(string name , int salary , int bonus) : Employee(name,salary){
            this ->bonus = bonus;
        }

        int getSalary(){
            return Employee::getSalary() + bonus;
        }
        int getBonus(){
            return bonus;
        }
        void setBonus(int bonus){
            this ->bonus = bonus;
        }
        void display()
        {
            Employee:: display();
            cout << "Bn : " << bonus << endl;
            cout << "maneger: " << getSalary() <<endl;
            
            // cout << "Name: " << getName() << endl;
		    // cout << "Salary: " << getSalary() << endl;
        }
};
int main ()
{
    Manager m("son", 3000 , 1500);
    m.display();
    m.setSalary(3000);
    m.setName("son");
    m.setBonus(2000);
    m.display();
    return 0 ;
}