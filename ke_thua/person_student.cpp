#include<iostream>

using namespace std;

class Person {
private:
	string name;
	int dob;
public:
	Person(string name, int dob) {
		this->name = name;
		this->dob = dob;
	}
	string getName(){
		return name;
	}
	void setName( string name){
		this -> name = name;
	}
	int getDob(){
		return dob;
	}
	void setDob(int dob){
		this ->dob =dob;
	}
};

class Student : public Person {
private: 
	double gpa;
public:
	Student(string name , int dob, double gpa) : Person(name,dob){
		this -> gpa = gpa;
	}
	double getGpa(){
		return gpa;
	}
	void setGpa(double gpa){
		this -> gpa = gpa;
	}
};

int main() {
	Student s("Hai", 1999, 8.8);
	cout << "Name: " << s.getName() << endl;
	cout << "Date of birth: " << s.getDob() << endl;
	cout << "GPA: " << s.getGpa() << endl;
	return 0;
}
