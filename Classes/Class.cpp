#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream> 
using namespace std;

class Student
{
private:
    int age;
    string first_name;
    string last_name;
    int standart;

public:

    Student(int a, string fn, string ln, int s){
        age= a;
        first_name= fn;
        last_name=ln;
        standart=s;
    }

  void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }

 void set_first_name(string a) {
            first_name = a;
        }
        string get_first_name() {
            return first_name;
        }

 void set_last_name(string a) {
            last_name = a;
        }
        string get_last_name() {
            return last_name;
        }

 void set_standart(int a) {
            standart = a;
        }
        int get_standart() {
            return standart;
        }

        string to_string(){

            stringstream s;
            char comma= ',';

            s << age << comma << first_name << comma << last_name << comma << standart;
            
            return s.str();
        }


};



int main() {

int age;
string first_name;
string last_name;
int standart;

cin >> age >> first_name >> last_name >> standart;

Student studentA(age, first_name, last_name, standart); 

cout << studentA.get_age() << endl;
cout << studentA.get_last_name() << ", " << studentA.get_first_name()<< endl;
cout << studentA.get_standart() <<  "\n" << endl;
        
cout << studentA.to_string();
     
    return 0;
}
