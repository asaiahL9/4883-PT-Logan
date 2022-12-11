#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
  int testcase;
  double length;
  // double length;
  
  double pi = acos(-1);
  while (cin >> testcase)
  { 
    for (int i = 0; i < testcase; i++)
    {
      double width = 0;
      double circle = 0;
      double radius = 0;
      double area = 0;
      cin >> length;
      radius = length / 5;
      width = (length * 6) / 10;
      circle = pi * (radius * radius);
      // cout << radius << endl;
      area = (length * width) - circle;
      // cout << area;
      cout << fixed << setprecision(2);
      cout << circle << " " << area << endl;
    }
  }
}