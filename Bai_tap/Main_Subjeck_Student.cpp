#include"Subject.cpp"
#include"Student.cpp"
// #include<iostream>
// using namespace std;
int main(){
    vector<Subject> s1;
    s1.push_back(Subject("toan",8.3,3,335));
    s1.push_back(Subject("van",8.5,3,335));
    Student ss(111,"son" ,s1);
    ss.display();
    return 0 ;
}