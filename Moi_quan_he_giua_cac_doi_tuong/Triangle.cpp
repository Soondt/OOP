#include <math.h>
#include "Point.cpp"
// triangle : hinh tam giac
// quan he phu thuoc :  su dung cac bien/phuong thuc cua class tren no 
class Triangle {
private:
	Point vertice1;
	Point vertice2;
	Point vertice3;

public:
    // contructor co tham so
	Triangle(Point vertice1, Point vertice2, Point vertice3) {
		this->vertice1 = vertice1;
		this->vertice2 = vertice2;
		this->vertice3 = vertice3;
	}
	// contructor co tham so theo class Point
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
		vertice1 = Point(x1, y1);
		vertice2 = Point(x2, y2);
		vertice3 = Point(x3, y3);
	}
    // tinh chu vi cua dang tam giav thuong
	double getPerimeter() {
		double d1 = sqrt(pow(vertice1.getX() - vertice2.getX(), 2)
			+ pow(vertice1.getY() - vertice2.getY(), 2));
		double d2 = sqrt(pow(vertice1.getX() - vertice3.getX(), 2)
			+ pow(vertice1.getY() - vertice3.getY(), 2));
		double d3 = sqrt(pow(vertice2.getX() - vertice3.getX(), 2)
			+ pow(vertice2.getY() - vertice3.getY(), 2));
		return d1 + d2 + d3;
	}
};