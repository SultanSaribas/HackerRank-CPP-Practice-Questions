#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream> 
using namespace std;

    vector<int> parseInts(string str){
      stringstream ss(str);
      char ch;
      int index;
      vector<int> s;
      while (ss)
      {
          ss >> index >> ch;
         s.push_back(index);

      }
        return s;
    }

int main() {
   
  
    string s; //sample input --> 23,4,56
    cin >> s;
    vector<int> v = parseInts(s);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;  //sample output --> 23 \n 4 \n 56
    }
    

    return 0;
}