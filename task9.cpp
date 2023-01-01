#include <iostream>
#include <windows.h>
using namespace std;
void flowers(float nred,float nwhite,float ntulip);
main()
{
 float nred;
float nwhite;
float ntulip;
cout << " enter red rose ";
 cin >> nred;
cout << " enter white rose ";
 cin >> nwhite;
cout << " enter tulip  ";
  cin >> ntulip;
 flowers(nred,nwhite,ntulip);
}
void flowers(float nred,float nwhite,float ntulip)
{ 
float price1;
float price2;
float price3;
float discount;
float originalprice;
float afterdiscount;
price1=nred*2.00;
price2=nwhite*4.10;
price3=ntulip*2.50;
originalprice=price1+price2+price3;
cout << " original price is: " << originalprice << endl;
if ( originalprice > 200)
{
discount=(originalprice*20)/100;
afterdiscount=originalprice-discount;
cout <<" price after discount: "<< afterdiscount << endl;
}
}
 



 