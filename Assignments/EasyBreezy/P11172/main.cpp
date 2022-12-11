#include <iostream>
using namespace std;
int main() {
  int num1, num2, testcase;
  while (cin >> testcase){
    for (int i = 0; i < testcase; i++){          
      cin >> num1 >> num2;
      if (num1 < num2){
        cout << "<\n";
      }
      else if (num1 > num2){
        cout << ">\n";
      }
      else{
        cout << "=\n";
      }
    }
  }
}