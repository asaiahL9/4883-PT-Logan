#include <iostream>
#include <string>
using namespace std;
int main() {
  string greeting;
  int i = 1;
  while (cin >> greeting){
    if (greeting == "#"){
      break;
    }
    if (greeting == "HELLO"){
      cout << "Case " << i << ": " << "ENGLISH\n";
    }
    else if (greeting == "HOLA"){
      cout << "Case " << i << ": " << "SPANISH\n";
    }
    else if (greeting == "HALLO"){
      cout << "Case " << i << ": " << "GERMAN\n";
    }
    else if (greeting == "BONJOUR"){
      cout << "Case " << i << ": " << "FRENCH\n";
    }
    else if (greeting == "CIAO"){
      cout << "Case " << i << ": " << "ITALIAN\n";
    }
    else if (greeting == "ZDRAVSTVUJTE"){
      cout << "Case " << i << ": " << "RUSSIAN\n";
    }
    else{
      cout << "Case " << i << ": " << "UNKNOWN\n";
    }
    i++;
  }
}