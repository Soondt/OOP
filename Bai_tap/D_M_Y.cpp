#pragma once
#include<iostream>
#include<vector>

using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){

        }
        Date(int day, int month, int year){
            this -> day = day ;
            this ->month = month;
            this ->year = year;
        }

        int getDay(){
            return  day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            this ->year = year;
        }
};