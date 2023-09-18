#include <iostream>

using namespace std;
union union_Jhunmark {
  int Yrlevel;
  char Section; 
  int stdno;
  double grd;
};

int main() {
    union_Jhunmark info;

    info.stdno = 2200987;
    cout << "Student No.: " << info.stdno << endl;

    info.Section = 'C';
    cout << "Section: " << info.Section << endl;

    info.Yrlevel = 2;
    cout << "Year level: " << info.Yrlevel << "nd" << endl;

    info.grd = 1.5;
    cout << "Grade: " << info.grd << endl;


    cout << "Memory location of Student No.: " << &info.stdno << endl;
    cout << "Memory location of Section: " << &info.Section << endl;
    cout << "Memory location of Year Level: " << &info.Yrlevel << endl;
    cout << "Memory location of grade: " << &info.grd << endl;
    return 0;
}