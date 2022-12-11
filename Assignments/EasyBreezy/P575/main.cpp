#include <iostream>
#include <string>
#include <math.h>
#define FileIn(file) freopen(file ".inp", "r", stdin)
#define FileOut(file) freopen(file ".out", "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define bit(n) (1 << (n))
#define Last(i) (i & -i)
#define INF 500000000
#define EPS 1e-7
#define maxN 10000
#define endl "\n"
#define DEBUG 1
#define debug(k, v) (if (DEBUG) { cout << k << ":" << v << endl; })
using namespace std;
int main() {
  int numey = 0;
  long int num;
  string nume;
  int i = 0;
  int numz;
  while (cin >> nume){
    if(nume == "0"){
      break;
    }
    int exponent = nume.size();
    for(int j = 0; j < nume.size(); j++){
      if(nume[j] == '0'){
        continue;
      }
      int charNum;
      charNum = (nume[j] - 48) * (pow(2, exponent - j) - 1);
      numey = numey + charNum;

    }
    cout << numey;
    cout << endl;
    numey = 0;
    i++;
  }
}