#include<iostream>
using namespace std;
class Array{
    public: 
        static int add(int a[] ,int n ){
            int sum = 0 ;
            for (int i = 0; i < n ; i++)
            {
                sum += a[i];
            }
            return sum ;
        }

        static double add(double a[] ,int n ){
            double sum = 0 ;
            for (int i = 0; i < n ; i++)
            {
                sum += a[i];
            }
            return sum ;
        }
};
int main ()
{
    int arr1[] = { 3, 4, 2 };
	double arr2[] = { 1.3, 4.2, 6.7 };
    cout << Array :: add(arr1 , sizeof(arr1)/sizeof(int)) << endl;
    cout << Array :: add(arr2 , sizeof(arr2)/sizeof(double)) << endl ;
    return 0 ;
}