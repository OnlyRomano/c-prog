#include <iostream>
using namespace std;

int main(){
    int n[10], i, sum = 0;
    for (i = 0; i < 10; i++){
        cout << "Input a Number: ";
        cin >> n[i];

        cout << "Value Of n["<<i<<"]: " << n[i] << endl;
    }
        cout << "\nPrint Array Elemets\n" << endl;
    for(int j = 0; j < 10; j++){
        cout << "Value of n["<<j<<"]: " << n[j] << endl;
        sum += n[j];
    }

    cout << "\n SUM: "<<sum;
}