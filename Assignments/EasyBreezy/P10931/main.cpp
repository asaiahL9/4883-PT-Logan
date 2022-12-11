#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() 
{
  unsigned int num = 0;
  unsigned int bitnum = 0;
  unsigned int count = 0;
  string binary = "";
  while (cin >> num){
    if (num == 0){
      return 0;
    }
    count = 0;
    for (int i = 31; i >= 0; i--)
    {
      bitnum = (num >> i) & 1;
      if (bitnum == 1){
        count++;
      }
    }
    binary = bitset<32>(num).to_string();
    binary.erase(0, binary.find_first_not_of('0'));
    cout << "The parity of " << binary << " is " << count << " (mod 2)." << endl;
  }
}