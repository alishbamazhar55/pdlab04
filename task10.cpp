#include <iostream>
using namespace std;
void holidays (int holiday);
main()
{
  int holiday;
  cout << " holiday is: ";
  cin >> holiday;
 holidays (holiday);
}
 
void holidays(int holiday)
{
 int daysperyear ;
int time;
int difference;
daysperyear=365-holiday;
time= (daysperyear*63)+(holiday*127);
difference=30000-time;
if ( time<=30000)
{
cout << " tom sleep well" << endl;
cout << difference << " minutes less for play";
}
if ( time > 30000)
{
cout << " tom will run away" << endl;
cout << difference << "mins for play";
}
}