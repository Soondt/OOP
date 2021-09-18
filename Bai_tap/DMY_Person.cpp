#pragma once
#include"D_M_Y.cpp"

class Person{
    private:
        Date dob;
        string name;
        string sex;
        string add;
    public:
        Person(){

        }
        Person(string name, Date dob, string sex, string add){
            this ->name = name;
            this ->dob = dob;
            this ->sex = sex;
            this ->add = add ;
        }

        string getName(){
            return name;
        }
        string getSex(){
            return sex;
        }
        string getAdd(){
            return add;
        }
        Date getDob(){
            return dob;
        }
};