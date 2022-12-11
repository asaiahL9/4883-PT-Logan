#include <iostream>
#include <stack>
using namespace std;

int main() {
	int num, target[1000];
	int i;

	while (true) {
		cin >> num;
		if (num == 0)
			break;

		while (true) {
			cin >> target[0];
			if (target[0] == 0){
				cout << endl;
				break;
			}
			for (i = 1; i < num; i++) {
				cin >> target[i];
			}

			int train = 1, targetIndex = 0;
			stack<int> station;
			while(train<=num){
				station.push(train);

				while(!station.empty() && station.top() == target[targetIndex]){
					station.pop();
					targetIndex++;
					if(targetIndex>=num) break;
				}

				train++;
			}

			if(station.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;
}