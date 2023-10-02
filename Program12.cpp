#include <iostream>

using namespace std;

int main() {
    const int nameMaxLength = 50;
    const int addressMaxLength = 100;

    char name[nameMaxLength];
    char address[addressMaxLength];

    cout << "Enter your name: ";
    cin.getline(name, nameMaxLength);

    cout << "Enter your city address: ";
    cin.getline(address, addressMaxLength);

    cout << name << " is from " << address << "." << endl;

    return 0;
}
