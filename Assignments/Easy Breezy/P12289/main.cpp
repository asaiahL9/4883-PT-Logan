#include <iostream>
#include <string>
using namespace std;
#define endl "\n"
int main() {
  string number;
  string one = "one";
  string two = "two";
  int num;
  while (cin >> num){
    for (int i = 0; i < num; i++){
      cin >> number;
      if (number.size() == 3)
      {
        if (one[0] == number[0] && one[1] == number[1] || 
          one[1] == number[1] && one[2] == number[2] ||
          one[0] == number[0] && one[2] == number[2]){
          cout << 1 << endl;
        }
        else {
          cout << 2 << endl;
        }
      }
      else
      {
        cout << 3 << endl;
      }
    }
  }
}