#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Student
{
private:
    int scores[5];

public:
    Student(/* args */){
        scores;
    };

    void input(){
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
        
    }

    int calculateTotalScore(){
        int total=0;
        for (int i = 0; i < 5; i++)
        {
            total += scores[i];
        }
        
        return total;
    }
};



int main() {
    
    int n, counter=0;
    cin >> n;

    Student s;
    vector<int> vscores;

    for (int i = 0; i < n; i++)
    {
        s.input();
        vscores.push_back(s.calculateTotalScore());
    }
    

    for (int i = 1; i < n; i++)
    {
        if (vscores[0] < vscores[i])  // First score belongs to Kristen
        {
            counter++;
        }
        
    }
    
    cout << counter;
       
    return 0;
}
