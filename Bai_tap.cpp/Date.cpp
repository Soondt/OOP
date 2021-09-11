#include<iostream>
using namespace std;
class Date{
    private:
        int month;
        int year;
        int day;
    public: 
        Date(){

        }
        Date(int day, int month ,int year){
            this ->day = day ;
            this -> month =month;
            this ->year = year;
        }
        int getDay(){
            return day;
        }
        void setDay(int day)
        {
            this ->day = day;
        }
        int getMonth()
        {
            return month;
        }
        void setMonth(int month){
            this ->month = month;
        }
        int getYear()
        {
            return year;
        }
        void setYear(int year){
            this -> year = year;
        }

        void standardized(){
            if(month > 12)
            {
                month = 12;
            }else if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
                if(day > 31){
                    day = 31;
                }
            }else if(month == 4 ||month == 6 ||month == 9 ||month == 11){
                if(day > 30){
                    day = 30;
                }
            }else{
                if(day > 28){
                    day = 28;
                }
            }
            if(year < 0 ){
                year = 0;
            }
            if(day < 1)
            {
                day = 1;
            }
        }
        friend istream& operator >> (istream& is , Date& d){
            is >> d.day;
            is >> d.month;
            is >> d.year;
            return is;
        }
        friend ostream& operator << (ostream& os, Date& d){
            os << d.day << "/"<< d.month << "/" << d.year;
            return os;
        }
};