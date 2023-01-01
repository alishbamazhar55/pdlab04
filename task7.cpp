#include <iostream>
#include <windows.h>
using namespace std;
void company(string name,float tickets);
main()
{
  string name;
  float tickets;
while(true)
{
  cout << " enter country name: ";
  cin >> name;
  cout << "enter tickets in dollars: ";
   cin >> tickets;
  company ( name,tickets);
}
}
void company ( string name, float tickets)
{ 
float discount;
float cost;
 if ( name== "pakistan")
{
discount=(tickets*5)/100;
cost= tickets-discount;
cout << " cost is: " << cost << endl;
}
 if ( name== "ireland")
{
discount=(tickets*10)/100;
cost= tickets-discount;
cout << " cost is: " << cost << endl;
}

 if ( name== "india")
{
discount=(tickets*20)/100;
cost= tickets-discount;
cout << " cost is: " << cost << endl;
}

 if ( name== "england")
{
discount=(tickets*30)/100;
cost= tickets-discount;
cout << " cost is: " << cost << endl;
}
 if ( name== "canada")
{
discount=(tickets*45)/100;
cost= tickets-discount;
cout << " cost is: " << cost << endl;
}
}
