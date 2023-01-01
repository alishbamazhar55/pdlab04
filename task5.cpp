#include <iostream>
#include <windows.h>
using namespace std;
void isequal(int a,int b);
main()
{
 int a;
int b;
while (true)
{
 cout << "enter a:";
 cin >> a;
 cout << " enter b : ";
  cin >> b;
  isequal(a,b);
}
}
void isequal(int a,int b)
{
 if (a==b)
{
cout << " true" << endl;
}
if (a!=b)
{
cout << "false" << endl;
}
}