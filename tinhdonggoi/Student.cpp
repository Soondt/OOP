#include<iostream>
using namespace std;
class Student{
    private:
        int id;
        int score;
        string name;
        string address;
        int age;
    public:
        Student(){

        }
        Student(int id,string name,int age,string address,int score){
            this->id = id;
            
            this ->name = name;
            
            this ->age = age ;
            this ->address = address;
            this ->setScore(score) ;
        }

        string getFullname_address(){
            return name + " " + address ;
        }

        int getId(){
            return id;
        }
        void setId(int id){
            this -> id = id;
        }
        int getAge(){
            return age;
        }
        void setAge(int age){
            this->age = age;
        }
        string getName(){
            return name ;
        }
        void setName(string name){
            this ->name = name;
        }
        string getAddress(){
            return address;
        }
        void setAddress(string address){
            this ->address = address;
        }
        int getScore(){
            return score;
        }
        void setScore(int score){
            if(score < 0){
                this->score = 0;
            }else if(score > 10){
                this ->score = 10;
            }else{
                this ->score = score;
            }
        }
};

int main() {
	Student s(1001, "Trung", 24, "Ha Noi", 5);
	cout << s.getId() << endl;;
	cout << s.getName() << endl;;
	cout << s.getAge() << endl;;
	cout << s.getAddress() << endl;;
	cout << s.getScore() << endl;;
	s.setScore(-7);
	cout << s.getScore() << endl;;
	s.setScore(15);
	cout << s.getScore() << endl;;
	return 0;
} 
