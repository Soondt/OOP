#include "Person.cpp"

class Customer : public Person{
    private:
        int branch;
    public:
        Customer(string name , string address, int branch) : Person(name, address){
            this -> branch = branch;
        }
        int getBrach(){
            return branch;
        }
        void setBranch(int branch){
            this ->branch = branch;
        }
        void display(){
            cout << "Name: " << Person :: getName() << endl;
            cout << "Address: " << Person :: getAddress() << endl;
            cout <<"Branch: " << branch << endl;
        }
};