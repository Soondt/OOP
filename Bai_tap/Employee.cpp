#include "Person.cpp"
class Employee : public Person {
private:
	double coefSalary;
	long moneySalary;
	long moneyEat;
public:
	Employee() {}
	Employee(string name, int age, string sex, double coefSalary, long moneySalary, long moneyEat) :
		Person(name, age, sex), coefSalary(coefSalary), moneySalary(moneySalary), moneyEat(moneyEat) {}
	double getCeofSalary()
	{
		return coefSalary;
	}
    void setC(double coefSalary){
        this -> coefSalary = coefSalary;
    }
	long getMoneySalary()
	{
		return moneySalary;
	}
    void setM(long moneySalary){
        this ->moneySalary = moneySalary;
    }
	long getMoneyEat()
	{
		return moneyEat;
	}
    void setME(long moneyEat){
        this ->moneyEat= moneyEat;
    }
	double Salary()
	{
		if (this->getAge() > 60)
		{
			return 0.5 * coefSalary * moneySalary;
		}
		return moneySalary * coefSalary + moneyEat;
	}
	void display()
	{
		Person::display();
		cout << "Salary: " << Salary() << endl;
	}
};