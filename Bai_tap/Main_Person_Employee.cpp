#include"Person.cpp"
#include"Employee.cpp"
int main(){
    
    Employee s("son",23,"nam",5,5,5);
    s.display();
    cout << "====================\n";
    s.setN("son");
    s.setA(23);
    s.setSex("nam");
    s.setC(5.5);
    s.setM(4.5);
    s.setME(6);
    s.display();
    return 0 ;
}