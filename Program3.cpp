# include <bits/stdc++.h>
  using namespace std;

union union_Jhunmark {
  char Sec; 
  int course; 
  double grd;
};

int main() {
  union_Jhunmark info;

  info.grd = 2.5;
  cout << "Grade: " << info.grd;

  info.course = 123;
  cout << "\nCourse Code: " << info.course << endl;

  info.Sec = 'C';
  cout << "Section: " << info.Sec << endl;

  cout << "Memory location of grade: " << &info.grd << endl;
  cout << "Memory location of Course: " << &info.course << endl;
  cout << "Memory location of Section: " << &info.Sec << endl;

  return 0;
}
