#include<iostream>
using namespace std;
class ArrayCalculator{
    public:
        static int maxOfArray(int a[] , int n ){
            int max = a[0];
            for (int i = 1; i < n; i++)
            {
                if(max < a[i])
                {
                    max = a[i] ;
                }
            }
            return max;
        }

        static int minOfArray(int a[] , int n ){
            int min = a[0];
            for (int i = 1; i < n; i++)
            {
                if(min > a[i])
                {
                    min = a[i] ;
                }
            }
            return min;
        }

        static double maxOfArray(double a[] , int n ){
            double max = a[0];
            for (int i = 1; i < n; i++)
            {
                if(max < a[i])
                {
                    max = a[i] ;
                }
            }
            return max;
        }

        static double minOfArray(double a[] , int n ){
            double min = a[0];
            for (int i = 1; i < n; i++)
            {
                if(min > a[i])
                {
                    min = a[i] ;
                }
            }
            return min;
        }
};
int main()
{
    int arr1[] = { 3, 4, 2 };
	double arr2[] = { 1.3, 4.2, 6.7 };

	cout << ArrayCalculator::minOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	cout << ArrayCalculator::minOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
	cout << ArrayCalculator::maxOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	cout << ArrayCalculator::maxOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
	return 0;
}