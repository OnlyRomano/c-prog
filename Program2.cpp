#include <iostream>
using namespace std;
int main() {
    int a = 6, b = 4;

    cout << "Relational and logical ops";

    cout << "\n a > b: "<< (a > b);
    cout << "\n a < b: " << (a < b);
    cout << "\n a == b: " << (a == (b + 2));

    cout << "\n Logical";
    cout << "\n (a > b) || (a < b): " << ((a > b) || (a < b));
    cout << "\n (a != b + 2) || (a < b): " << ((a != b + 2) || (a < b));
    cout << "\n (a > b) && (a < b): " << ((a > b) && (a < b));
    cout << "\n (a != b + 2) || (a < b): " << !(((a != b + 2) || (a < b)));
    
    return 0;
}