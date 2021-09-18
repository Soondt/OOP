#include "Shape.cpp"

class Rectangle : public Shape{
    private:
        double lenght;
        double width;
    public: 
        Rectangle(double lenght, double width){
            this ->lenght = lenght;
            this -> width = width;
        }

        double getLenght(){
            return lenght;
        }
        void setLenght(double lenght){
            this ->lenght = lenght;
        }
        double getWidth(){
            return width;
        }
        void setWidth(double width){
            this -> width = width;
        }

        double getArea(){
            return lenght*width*2;
        }
        double getPerimeter(){
            return (lenght + width) * 2;
        }
};