#include<iostream>
#include<vector>
using namespace std;
class Transport{
    //manufacturer, name, year, speed
    private:
        string manufacturer;
        string name;
        int year;
        int speed;
    public:
        Transport(){

        }
        Transport(string manufacturer, string name, int year, int speed){
            this ->manufacturer = manufacturer;
            this ->name = name;
            this ->year = year;
            this ->speed = speed;
        }
        string getManufacturer(){
            return manufacturer;
        }
        void setManufacturer(string manufacturer){
            this ->manufacturer = manufacturer;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this ->name = name;
        }
        int getYear(){
            return year;
        }
        void setYear(int year){
            this ->year = year;
        }
        int getSpeed(){
            return speed;
        }
        void setSpeed(int speed){
            this ->speed = speed;
        }
        void display(){
            cout <<"Manufacturer: " << manufacturer << endl;
            cout << "Name: " << name << endl;
            cout << "Year: " << year << endl;
            cout <<"Speed: " << speed << endl;
        }
};
class Car : public Transport {
    private:
        int numberSeat;
        string engineType;
    public:
        Car(){

        }
        Car(string manufacturer, string name, int year, int speed,int numberSeat,string engineType)
         : Transport(manufacturer,name,year,speed){
            this ->numberSeat = numberSeat;
            this ->engineType = engineType;
        }
        int getNumberSeat()
        {
            return numberSeat;
        }
        string getEngineType()
        {
            return engineType;
        }

        double getSpeedBasic()
        {
            return this->getSpeed() / numberSeat;
        }
        void display()
        {
            Transport::display();
            cout << "Number Seat: " << numberSeat << endl;
            cout << "Engine Type: " << engineType << endl;
            cout << "Speed Basic: " << getSpeedBasic() << endl;
        }
        // toc do max
        static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt) {
            vector<Car> v;
            double max = vt[0].getSpeedBasic();
            for (int i = 1; i < vt.size() - 1; i++)
            {
                if(max < vt[i].getSpeedBasic())
                {
                    max = vt[i].getSpeedBasic();
                }
            }
            
            for (int i = 0; i < vt.size(); i++)
            {
                if(max == vt[i].getSpeedBasic())
                {
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
        // so ghe ngoi nhieu nhat
        static vector<Car> getCarHaveMaxSeat(vector<Car> vt)
        {
            vector<Car> v;
            double max = vt[0].getNumberSeat();
            for (int i = 0; i < vt.size(); i++)
            {
                if (vt[i].getNumberSeat() > max)
                {
                    max = vt[i].getNumberSeat();
                }
            }
            for (int i = 0; i < vt.size(); i++)
            {
                if (vt[i].getNumberSeat() == max)
                {
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
};
