#include<iostream>
using namespace std;
class Math{
    private:
        double a; 
        double b;
    public: 
        Math(){

        }
        Math(double a ,double b){
                this -> a = a ;
                this -> b = b ;
        }
        double getA(){
            return a;
        }
        void setA(double a){
            this->b = b ;
        }
        double getB(){
            return b;
        }
        void setB(double b){
            this ->b  = b ;
        }

        double getPerimeter(){
            return (a+b)*2;
        }
        double getArea(){
            return a*b;
        }
};
int main()
{
    Math r(4,5);
    cout << "chu vi: " << r.getPerimeter() << endl;
    cout << "dien tich: " << r.getArea() << endl;
    // thay doi qua set
    r.setA(5);
    r.setB(8);
    cout << "chu vi: " << r.getPerimeter() << endl;
    cout << "dien tich: " << r.getArea() << endl;
    return 0;
}
