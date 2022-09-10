#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define endl "\n"
// function to check if all traffic lights are green
bool green(vector<int>& time, int currentTime)
{
	for (int i = 0; i < time.size(); ++i)
	{
		if (currentTime % (time[i] * 2) >= time[i] - 5)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int cz = 1; // variable to help check if zero is read
              // cz = 0 when a second consecutive zero is read
  int currentTime;
	int light1;
	int light2;
	int temp;
	int min = 0;
	vector <int> time;
	while (cin >> light1)
	{
		// if array has no data, set a minimum value
    if (time.empty()) {
			min = light1;
		}
    // set new minimum value if the light green cycle 
    // time is less than current min
		if (light1 < min && light1 != 0)
		{
			min = light1;
		}

		if (light1 == 0)
		{
			currentTime = min * 2; // min * 2 = minimum light cycle time
			bool greenLights;
			if (cz == 1) // consecutive zeroes have not been read from input file
			{
				// add increment currentTime + 1 if all lights aren't green
        while (!(greenLights = green(time, currentTime)) && currentTime <= 18000)
				{
					++currentTime;
				}
				if (greenLights)
				{
          // displaying synchronized time
					int hour = currentTime / 3600;
					cout << setw(2) << setfill('0') << currentTime / 3600 << ":"
						<< setw(2) << setfill('0')
						<< (currentTime - hour * 3600) / 60 << ":"
						<< setw(2) << setfill('0') << currentTime % 60 << endl;
				}
				else
				{
					cout << "Signals fail to synchronise in 5 hours\n";
				}
			}
			while (cin >> light2)
			{
				// if an integer != 0 is read -> empty the vector
        // -> push the integer into the now empty vector
        // -> exit the loop
        if (light2 != 0)
				{
					temp = light2;
					int size = time.size();
					for (int i = 0; i < size; i++)
					{
						time.pop_back();
					}
					time.push_back(temp);
					min = temp;
					break;
				}
				else
				{
					cz = 0; // consecutive 0 is read
				}
			}
		}
		else
		{
			time.push_back(light1); // add value to vector if light != 0
		}
	}
}