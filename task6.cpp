#include <iostream>
#include <windows.h>
using namespace std;
void reverse(string a);
main()
{
string a;
while(true)
{
cout << " enter a:";
cin >> a;
 reverse(a);
}
}
void reverse(string a)
{
if (a == "true")
{
cout << " false" << endl;
}
if (a == "false")
{
cout << " true" << endl;
}
} 
