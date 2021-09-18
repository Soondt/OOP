//Card(nameBook : string, nameAuthor : string, numberBook : int)
#include<iostream>
#include<vector>
using namespace std;
class Card{
    private:
        string nameAuthor;
        int numberBook;
        string nameBook;
    public:
        Card(){

        }
        Card(string nameBook , string nameAuthor, int numberBook){
            this ->nameBook = nameBook;
            this ->nameAuthor = nameAuthor;
            this ->numberBook = numberBook;
        }
        int getNumberBook(){
            return this->numberBook;
        }
        void display(){
            cout << "Name Book: " << this->numberBook << endl;
            cout << "Name Author: " << this->nameAuthor << endl;
            cout << "Number Book: " << this->numberBook << endl;
        }
        static void sortCards(vector<Card> &cards){
            for (int  i = 0; i < cards.size() - 1; i++)
            {
                for (int  j = i +1; j < cards.size(); j++)
                {
                    if(cards[i].getNumberBook() > cards[j].getNumberBook() ){
                        swap(cards[i],cards[j]);
                    }
                } 
            } 
        }
};
int main(){
    Card card1("son","kkkk", 6);
    card1.display();
    return 0;
}
