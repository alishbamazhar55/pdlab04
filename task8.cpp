#include<iostream>
#include <windows.h>
using namespace std;
void challen( float speed);
main()
{
 float speed;
while (true)
{
 cout << " speed is  ";
cin >> speed;
 challen(speed);
 }
}
void challen(float speed)
{
 if ( speed <=100)
{
cout << "PERFECT! YOU ARE GOING GOOD" << endl;
}
if ( speed > 100)
{
cout << " halt....YOU WILL BE CHALLENGED"<< endl;
}
}
