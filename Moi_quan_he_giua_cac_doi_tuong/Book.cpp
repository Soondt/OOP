#include<iostream>
#include"Author.cpp"
#include<vector>

using namespace std;
class Book{
    private:
        string name;
        double price;
        vector<Author> authors;
    public:
        Book(string name , vector<Author> authors, double price)
        {
            this -> name = name ;
            this ->authors = authors;
            this -> price = price;
        }

        string getName()
        {
            return name;
        }
        void setName(string name){
            this ->name =name;
        }
        double getPrice(){
            return price;
        }
        void setPrice(double price){
            this ->price = price;
        }
        
        string getAuthorNames(){
            string authorNames = "" ;
            for (int i = 0; i < authors.size() - 1; i++)
            {
                authorNames += authors[i].getName() + ", ";
            }
            authorNames += authors[authors.size() -1].getName();
            return authorNames;
        }
};