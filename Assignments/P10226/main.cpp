#include <iostream>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
    int testcase;
    scanf("%d\n\n",&testcase); 
    for(int i = 0; i < testcase; i++)
    {
        int count=0;
        string tree;
        map<string,int> Species;
        while(getline(cin,tree))
        {
            if(tree == ""){
              break;
            }else{
              count++;
              Species[tree]++;
            }               
            
        }
        for(auto s:Species)
        {
           cout<<s.first<<" "<<fixed<<setprecision(4)<<(double)(s.second*100)/count<<endl;
        }
      if(testcase != 0)
        cout<<endl << endl;
      } 
  return 0;
}