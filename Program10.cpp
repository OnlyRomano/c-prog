#include <iostream>

using namespace std;

int main() {
    const int numStudents = 5;
    const int numGrades = 4;

    double averages[numStudents] = {0};

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter grades for Student " << i + 1 << ":\n";
        double sum = 0;

        for (int j = 0; j < numGrades; ++j) {
            cout << "Grade " << j + 1 << ": ";
            double grade;
            cin >> grade;
            sum += grade;
        }

        averages[i] = sum / numGrades;
    }

    cout << "\nStudent No\t\tAverage\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << "\t\t" << averages[i] << "\n";
    }

    return 0;
}
