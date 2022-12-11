#include <iostream>
#include <string>
using namespace std;
int main() 
{
  string num1;
  string num2;
  int carry;
  // int arr[10];
  // int arr2[10];
  // num = "100";
  while (cin >> num1)
  {
    cin >> num2;
    int digit1 = 0;
    int digit2 = 0;
    int add = 0;
    carry = 0;
    if (num1.size() != num2.size())
    {
      if (num1.size() < num2.size())
      {
        add = num2.size() - num1.size();
        for (int i = 0; i < add; i++)
        {
          num1 = "0" + num1;    
        }
      }
      else
      {
        add = num1.size() - num2.size();
        for (int i = 0; i < add; i++)
        {
          num2 = "0" + num2;    
        }
      }
      // cout << num1 << endl << num2 << endl;
    }
    if (num1 == "0" && num2 == "0")
    {
      break;
    }
    else
    {
      for (int i = (num1.size()-1); i >= 0; i--)
      {
        // cout << num1.size() << endl << endl;
        digit1 = (num1[i] - 48);
        digit2 = (num2[i] - 48);
        // cout << digit1 << "+" << digit2 << endl;
        // cout << digit1 << endl << digit2 << endl << endl;
        if ((digit1 + digit2) > 9)
        {
          carry++;
          if (num1[i-1] != NULL)
          {
            num1[i-1] = num1[i-1] + 1;
            // cout << "num1[i+1]: " << num1[i+1] << endl;
            // cout << num1 << endl;
          }
          else{
            break;
          }
        }
      }
      if (carry == 0)
      {
        cout << "No carry operation.\n";
      }
      else
      {
        if (carry != 1)
        {
          cout << carry << " carry operations.\n";  
        }
        else
        {
          cout << "1 carry operation.\n";
        }
      }
      
    }
    
  }
}