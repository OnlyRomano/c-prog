#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int numbers[size];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int highest = numbers[0];
    int lowest = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    cout << "Highest number: " << highest << endl;
    cout << "Lowest number: " << lowest << endl;

    return 0;
}
