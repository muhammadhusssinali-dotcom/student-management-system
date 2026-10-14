#include <iostream>
using namespace std;
int main()
{
  float Obtainedmarks,Totalmarks,percentage,marks;
  char Grade;
  cout << "Please enter your obtainedmarks : " << endl;
  cin >> Obtainedmarks;
  cout << "Please enter you totalmarks : " << endl;
  cin >> Totalmarks;
  percentage = Obtainedmarks / Totalmarks * 100;
  marks = percentage;
  if (marks >= 80 && marks <= 100)
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is A" << endl;
    cout << "Thanks You and keep smiling" << endl;
  }
  else if (marks >= 70 && marks <= 79)
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is B" << endl;
    cout << "Thanks You and keep smiling" << endl;
  }
  else if (marks >= 60 && marks <= 69)
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is C" << endl;
    cout << "Thanks You and keep smiling" << endl;
  }
  else if (marks >= 50 && marks <= 59)
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is D" << endl;
    cout << "Thanks You and keep smiling" << endl;
  }
  else if (marks >= 40 && marks <= 49)
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is E" << endl;
    cout << "Thanks You and keep smiling" << endl;
  }
  else
  {
    cout << "Your percentage is : " << marks << endl;
    cout << "Your grade is F" << endl;
    cout << "Keep Hard working and try again" << endl;
  }
  return 0;
}