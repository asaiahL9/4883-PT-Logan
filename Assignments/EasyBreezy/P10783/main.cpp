#include <iostream>
using namespace std;
int main() {
  int testcase;
  int num1;
  int num2;
  int range;
  int sum;
  int count = 1;
  cin >> testcase;
  for (int i = 1; i <= testcase; i++){
    while (cin >> num1){
      cin >> num2;
      sum = 0;
      if (num1 % 2 == 0){
        num1++;
      }
      while (num1 <= num2){
        // cout << "num1 " << num1 << endl;
        sum += num1;
        num1 = num1 + 2;
      }
      cout << "Case " << count << ": " << sum << endl;
      count++;
    }
  }
}