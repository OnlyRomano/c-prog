#include <iostream>
using namespace std;

int main(){
    int num[8] = {19, 10, 8, 3, 9, 5, 3, 7}, i = 1;

    // change 4th element to 9
    cout << "original num[3]: " << num[3] << endl;
    num[3] = 20;
    cout << "New Num[3]: " << num[3] << endl;

    // take input from the user
    // store the value at third position
    cin >> num[2];
    cout << "Num[2]: " << num[2] << endl;


    // take input from the user
    // insert at ith position
    cin >> num[i-1];

    // print first element of the array
    cout << num[i - 1];

    // print ith element of the array
    i = 1;
    cout << num[i-1] << endl;

    return 0;
}