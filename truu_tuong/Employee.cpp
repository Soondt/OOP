#include"Person.cpp"

class Employee : public Person{
    private: 
        int salary;
    public: 
        Employee(string name ,string address ,int salary) : Person(name,address){
            this ->salary = salary;
        }
        
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this ->salary = salary;
        }
        void display(){
            cout << "Name: " << Person:: getName() << endl;
            cout << "Address: "  << Person :: getAddress() << endl;
            cout << "Salary: " << salary << endl;
        }
};