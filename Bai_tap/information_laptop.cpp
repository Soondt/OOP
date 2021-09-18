#include<iostream>
#include<vector>
using namespace std;
class Laptop{
    private:
        string name;
        long price;
        int year;
        string origin;
    public:
        Laptop(){

        }
        Laptop(string name,int year, string origin, long price){
            this ->name = name;
            this ->year =year;
            this ->origin =origin;
            this ->price = price;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this ->name= name;
        }
        string getOrigin(){
            return origin;
        }
        void setOrigin(string origin){
            this ->origin = origin;
        }
        int getYear(){
            return year;
        }
        void setYear(int year){
            this ->year= year;
        }
        long getPrice(){
            return price;
        }
        void setPrice(long price){
            this ->price = price;
        }
        void display()
	    {
            cout << "Name: " << name << endl;
            cout << "Year Of Manufacture: " << year << endl;
            cout << "Origin: " << origin << endl;
            cout << "Price: " << price << endl;
	    }

    //là phương thức tĩnh với đầu vào vt là một danh sách các laptop và y là năm chúng ta cần tìm kiếm
    //getLaptopYear(vt: vector<Laptop>, y: int): static vector<Laptop>
        static vector<Laptop>  getLaptopYear(vector<Laptop> vt ,int y){
            vector<Laptop> v;
            for (int i = 0; i < vt.size() -1; i++)
            {
                if(y == vt[i].getYear()){
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
    //là phương thức tĩnh với đầu vào vt là một danh sách các laptop và og là xuất xứ chúng ta cần tìm kiếm
    //getLaptopOrigin(vt: vector<Laptop>, og: string): static vector<Laptop>
        static vector<Laptop> getLaptopOrigin(vector<Laptop> vt , string og){
            vector<Laptop> v;
            for (int i = 0; i < vt.size() -1; i++)
            {
                if(og == vt[i].getOrigin())
                {
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
};
int main(){
    Laptop l("hoang son" , 23 , "thanh hoa" , 1618);
    l.display();
    return 0 ;
}