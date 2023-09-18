#include <iostream>

using namespace std;

int main(){
    enum colors: int{
        red,
        blue,
        green,
        yellow,
        purple = 100
    } var;
    
    cout << "Value of Red: " << red<< endl;
    cout << "Value of Blue: " << blue << endl;
    cout << "Value of Green: " << green << endl;
    cout << "Value of Yellow: " << yellow << endl;
    cout << "Value of Yellow: " << purple << endl;

}