#include <iostream>
using namespace std;

class Fraction {
private:
	int x;
	int y;
public:
	Fraction(){}
	Fraction(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	int getX()
	{
		return x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getY()
	{
		return y;
	}
    // nap chồng toán tử
	friend Fraction operator + (Fraction &a, Fraction &b)
	{
		return(Fraction(a.x * b.y + b.x * a.y, a.y * b.y));
	}
	friend Fraction operator - (Fraction& a, Fraction& b)
	{
		return(Fraction(a.x * b.y - b.x * a.y, a.y * b.y));
	}
	friend Fraction operator * (Fraction& a, Fraction& b)
	{
		return(Fraction(a.x * b.x , a.y * b.y));
	}
	friend Fraction operator / (Fraction& a, Fraction& b)
	{
		return(Fraction(a.x * b.y, a.y * b.x));
	}
	friend bool operator == (Fraction& a, Fraction& b)
	{
		if (a.x == b.x && a.y == b.y)
			return true;
		return false;
	}
	int gcd(int a, int b)
	{
		if (b == 0)
		{
			return a;
		}
		return gcd(b, a % b);
	}
    //phương thức tối giản phân số.
	void reduce()
	{
		int d;
		d = gcd(this->x, this->y);
		this->x = this->x / d;
		this->y = this->y / d;
	}
	void display()
	{
		cout << x << "/" << y;
	}
};