#include<iostream>
using namespace std;
class Time{
    private: 
        int second;
        int minute;
        int hour;
    public: 
        Time() {}
	Time(int h, int m, int s)
	{
		this->second = s;
		this->minute = m;
		this->hour = h;
	}
	void setSecond(int s)
	{
		this->second = s;
	}
	int getSecond()
	{
		return second;	
	}
	void setMinute(int m)
	{
		this->minute = m;
	}
	int getMinute()
	{
		return minute;
	}
	void setHour(int h)
	{
		this->hour = h;
	}
	int getHour()
	{
		return hour;
	}

    void standardized(){
        if(second > 59){
            minute += second/60;
            second = second % 60;
        }
        if(minute > 59){
            hour += minute/60;
            minute = minute % 60;
        }
        if(hour >23){
            hour = hour % 24;
        }
    }
    Time operator ++(){
        second ++;
        Time t(hour,minute,second);
        t.standardized();
        return t;
    }
    Time operator ++(int){
        Time t(hour,minute,second);
        second++;
        t.standardized();
        return t;
    }

    Time operator --(){
        second --;
        Time t(hour,minute,second);
        t.standardized();
        return t;
    }
    Time operator --(int){
        Time t(hour,minute,second);
        second--;
        t.standardized();
        return t;
    }
};