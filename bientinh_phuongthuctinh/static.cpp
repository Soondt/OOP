#include<iostream>
using namespace std;
class Math{
    public: 

        static int add(int a, int b ){
            return a + b ;
        }

        static int sub(int a, int b)
        {
            return a- b ;
        }

        static int pow (int x ,int y){
            int power = 1;
            for(int i = 0 ; i < y ;i ++)
                {
                    power *= x ;
                }
                return power;
        }

        static int max(int a,int b){
            return a > b ? a : b ;
        }

        static int min(int a,int b){
            return a < b ? a : b ;
        }
};