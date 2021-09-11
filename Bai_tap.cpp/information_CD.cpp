//name, price, number 
// in ra thong tin, va so dia loon nhat
#include<iostream>
#include<vector>

using namespace std;
class CD{
    private:
        string name;
        int numberCD;
        double price;
    public:
        CD(){

        }
        CD(string name, int numberCD, double price){
            this ->name = name;
            this ->numberCD = numberCD;
            this ->price = price;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this ->name = name;
        }
        double getPrice(){
            return price;
        }
        void setPrice(double price){
            this ->price = price;
        }
        int getNumberCD(){
            return numberCD;
        }
        void setNumberCD(int numberCD){
            this ->numberCD = numberCD;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Number CD: " << numberCD << endl;
            cout << "Price: " << price << endl;
        }

//à phương thức tĩnh sắp xếp danh sách các đĩa CD theo thứ tự tăng dần của giá mỗi CD.
        static void sortPrice( vector<CD> vt){
            for (int i = 0; i < vt.size() -1; i++)
            {
                for (int j = i+1; j < vt.size(); j++)
                {
                    if(vt[i].getPrice() < vt[j].getPrice())
                    {
                        swap(vt[i],vt[j]);
                    }
                } 
            }  
        }
//là phương thức tĩnh trả về một vector chứa các đĩa CD có số lượng đĩa lớn nhất.
        static vector<CD> getCDMax(vector<CD> vt){
            int max = vt[0].getNumberCD();
            // tạo vector chứa các đối tượng có số lượng đĩa lớn nhất
            vector<CD> v; 
            for (int i = 0; i < vt.size() -1; i++)
            {
                if(vt[i].getNumberCD() > max){
                    max = vt[i].getNumberCD();
                }
            }
            for (int i = 0; i < vt.size(); i++)
            {
                if(max == vt[i].getNumberCD())
                {
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
};

int main(){
    CD c("son",7,8.1);
    c.display();
    return 0;
}