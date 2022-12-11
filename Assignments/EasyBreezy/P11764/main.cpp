#include <iostream>
using namespace std;

int main() {
	int testcase;
  int highjumps; 
  int lowjumps;
  int walls;
  int current; 
  int prev; 
  int count = 1;
  
	cin >> testcase;

	while(testcase--){
    
		cin >> walls >> prev;

		highjumps = lowjumps = 0;
		for(int i = 0; i < walls-1; i++){
			cin >> current;
			if(current > prev ){
        highjumps++;
      }
			if(current<prev){
        lowjumps++;
      }
			prev = current;
		}
    cout << "Case " << count << ": " << highjumps << " " << lowjumps << endl;
    count++;
	}
}