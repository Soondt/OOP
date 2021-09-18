#pragma once
#include"DMY_Person.cpp"

class AccountBank{
    private:
        Person p;
        string id;
        int money;
        string status;
    public:
        AccountBank(){

        }  
        AccountBank(Person p , string id , int money) : p(p), id(id),money(money)
        {
            
            if (money < 10000)
            {
                status = "copper";
            }
            else if (money < 20000)
            {
                status = "siliver";
            }
            else if (money < 30000)
            {
                status = "gold";
            }
            else
            {
                status = "diamond";
            }
        }

        Person getP(){
            return p;
        }
        string getId(){
            return id;
        }
        string getStatus(){
            return status;
        }
        int getMoney(){
            return money;
        }
        // so tien lon nhat
        static vector<AccountBank> getAccountRich(vector<AccountBank> vt){
            vector<AccountBank> v;
            int max = vt[0].getMoney();
            for (int i = 1; i < vt.size() -1; i++)
            {
                if(max < vt[i].getMoney()){
                    max = vt[i].getMoney();
                }
            }
            
            for (int i  = 0; i  < vt.size(); i ++)
            {
                if(max == vt[i].getMoney()){
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
        // dua ra cac status nhu cac nut
        static vector<AccountBank> getAccountStatus(vector<AccountBank> vt, string st){
            vector<AccountBank> v;
            for (int i = 0; i < vt.size() -1; i++)
            {
                if(vt[i].getStatus() == st){
                    v.push_back(vt[i]);
                }
            }
            return v;
        }
        //add tai khoan
        static vector<AccountBank> getAccountRichAdd(vector<AccountBank> vt, address: string){
            vector<AccountBank> v;
            vector<AccountBank> rich(AccountBank::getAccountRich(vt));
            for (int i = 0; i < rich.size(); i++)
            {
                if (rich[i].getP().getAdd() == address)
                {
                    v.push_back(rich[i]);
                }
            }
            return v;
        }
        // dien thong tin neu trung thi hien ra nguoi do
        static vector<AccountBank> getAccountBirthDay(vector <AccountBank> vt, int d, int m)
        {
                vector<AccountBank> v;
                for (int i = 0; i < vt.size(); i++)
                {
                    if (vt[i].getP().getDob().getDay() == d && vt[i].getP().getDob().getMonth() == m)
                    {
                        v.push_back(vt[i]);
                    }
                }
                return v;
        }
};