#include<iostream>
#include<string>
using namespace std;

class Date{
private:
      int day;
      int month;
      int year;

public:
   //No argument constructor
   Date(): day(1), month(1), year(2000){}
   //Parameterized constructor
   Date(int d, int m, int y): day(d), month(m), year(y) {}
   //Function to accept date from user
   void acceptDate()
{
    cout << "Enter day:";
    cin >> day;
    cout << "Enter month:":
    cin >> month:
    cout << "Enter year:";
    cin >> year;
}
