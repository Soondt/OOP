#include<iostream>
#include"Customer.cpp"
#include"Invoice.cpp"
using namespace std;

int main(){
    Customer customer1(1000,"son",20) ;
    Invoice invoice1(1111,customer1,1000);
    cout << "customer name : " << invoice1.getCustomerName()<< endl;
    cout << "amount after: " << invoice1.getAmountAfterDiscount() <<endl;
    return 0;
}