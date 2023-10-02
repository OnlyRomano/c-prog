#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numColors = 6;
    string colors[numColors] = {"red", "blue", "pink", "green", "orange", "purple"};

    cout << "Input colors: ";
    for (int i = 0; i < numColors; ++i) {
        cout << colors[i] << " ";
    }

    cout << "\nOutput colors in reverse order: ";
    for (int i = numColors - 1; i >= 0; --i) {
        cout << colors[i] << " ";
    }

    cout << endl;

    return 0;
}
