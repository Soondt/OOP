#include<iostream>
using namespace std;
class naptrong{
    public:
        static int max(int a, int b)
        {
            return a > b ? a : b ;
        }
        static int max (int a ,int b ,int c ){
            return max (max(a,b),c);
        }
};
int main ()
{
    cout << naptrong :: max(2.4) << endl ;
    cout << naptrong :: max(2,4,3);
    return 0 ;

}