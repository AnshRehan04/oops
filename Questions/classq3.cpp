#include <iostream>
#include <string>
using namespace std;
class MagicWand{
    private:
    string wandcore;
    int length;
    public:
    MagicWand(string wandcore,int length);
    MagicWand operator+(const MagicWand &other){
        MagicWand result=*this;
        result.length+=other.length;
        return result;
    }
    void displayItem() const {
        cout << "Item: " << wandcore << ", Price: " << length ;
    }
    
};
int main(){

    MagicWand item1("Wand1",12);
    MagicWand item2("Wand2",12);

    MagicWand combined=item1+item2;
    combined.displayItem();
}