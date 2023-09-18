#include <iostream>

using namespace std;

int main()
{
    int num1 = 8, num2 = 9, r1;
    float num3 = 10.99, num4 = 8.99, r2;

    num2++;
    cout << "\nIncrement num1: " << num2;

    num4--;
    cout << "\nDecrement num2: " << num4;

    cout<<"\n\nArithmetic Operation";

    r1 = num1 + num2;
    cout << "\nSum: " << r1;
    r1 = num1 - num2;
    cout << "\nDifferent: " << r1;
    r1 = num1 * num2;
    cout << "\nquotient: " << r1;


    cout << "\n\nRelational Operation";
    r1 = (num1 == num2);
    cout << "\nIs Equal (num1 == num2: " << r1;
    r2 = (num4 > num3);
    cout << "\ngreater than (num4 > num3): " << r2;
    r1 = (num1 < num2);
    cout << "\nLess than (num1 < num2): " << r1;

    cout << "\n\n5 short cut operator";
    num1 += 3;
    cout << "\nadd assign (num1 + 3): " << num1;
    num2 -= 8;
    cout << "\nSubtract assign (num2 - 8): " << num2;
    num2 *= 4;
    cout << "\nMultiply assign (num2 * 4): " << num2;
    num3 /= 9;
    cout << "\nDivide assign (num3 / 9): " << num3;
    num1 %= 2;
    cout << "\nModulos assign (num1 % 2)" << num4;

    return 0;
}