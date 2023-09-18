#include <iostream>
using namespace std;

int main() {

    const double DOLLAR_TO_PESO = 56.83;
    const double LITER_TO_ML = 1000.0;
    const double TEMPERATURE_MIN_C = -10.0; 
    const double TEMPERATURE_MAX_C = 40.0;   
    const double CONSTANT_VALUE = 100.0;     

   
    double temperature_min_f = (TEMPERATURE_MIN_C * 1.8) + 32;
    double temperature_max_f = (TEMPERATURE_MAX_C * 1.8) + 32;


    cout << "Minimum Temperature in Fahrenheit: " << temperature_min_f << endl;
    cout << "Maximum Temperature in Fahrenheit: " << temperature_max_f << endl;
    cout << "Constant Value: $" << CONSTANT_VALUE << endl;

    return 0;
}
