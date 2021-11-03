#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    
    struct Students
    {
        int age;
        string first_name;
        string last_name;
        int standart;
    };

    Students student1;

    cin >> student1.age >> student1.first_name >> student1.last_name >> student1.standart;

    cout << student1.age << " " << student1.first_name << " " << student1.last_name << " " << student1.standart;
      
    return 0;
}
