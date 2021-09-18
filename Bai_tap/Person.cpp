#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
	string sex;
public:
	Person() {}
	Person(string name, int age, string sex) : name(name), age(age), sex(sex) {}
	string getName()
	{
		return name;
	}
    void setN(string name){
        this ->name =name;
    }
	int getAge()
	{
		return age;
	}
    void setA(int age){
        this ->age = age;
    }
	string getSex()
	{
		return sex;
	}
    void setSex(string sex){
        this ->sex = sex;
    }
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Sex: " << sex << endl;
	}
};