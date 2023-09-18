#include <iostream>

using namespace std;

int main(){
    enum colors: int{
        apple,
        papaya,
        pineapple = 5,
        melon,
        mango = 10,
        banana
    } var;
    
    cout << "Value of Apple: " << apple << endl;
    cout << "Value of Papaya: " << papaya << endl;
    cout << "Value of Pineapple: " << pineapple << endl;
    cout << "Value of Melon: " << melon << endl;
    cout << "Value of Mango: " << mango << endl;
    cout << "Value of Banana: " << banana << endl;

    return 0;
}