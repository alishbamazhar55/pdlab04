 #include <iostream>
#include <windows.h>
using namespace std; 
void gotoxy(int x,int y);
void printMenu(int x1, int y1, string name1,
int matric1,
int inter1,
int ecat1,
string name2,
int matric2,
int inter2,
int ecat2,
float totalaggregate,
float total_aggregate,
string name,
int mmatric,
int minter,
int mecat,
char anykeyToContinue,
int number);
void value1(string name1, int matric1,int inter1,int ecat1, char anykeyToContinue);
void value3( string name1,int matric1,int inter1,int ecat1,float totalaggregate);
void value2(string name2, int matric2,int inter2,int ecat2);
void value4( string name2,int matric2,int inter2,int ecat2,float total_aggregate);
void compareaggregate( string name1,string name2,int ecat1,int ecat2);
main()
{ 
system ("cls");
string name1;
int matric1;
int inter1;
int ecat1;
string name2;
int matric2;
int inter2;
int ecat2;
float totalaggregate;
float total_aggregate;
string name;
int mmatric;
int minter;
int mecat;
int x1;
int y1;
char anykeyToContinue;
int number;

 printMenu(6,9,name1,
 matric1,
 inter1,
 ecat1,
 name2,
 matric2,
 inter2,
 ecat2,
 totalaggregate,
 total_aggregate,
 name,
 mmatric,
 minter,
 mecat,
 anykeyToContinue,
 number);


}
void value1(string name1, int matric1,int inter1,int ecat1, char anykeyToContinue)
{

cout << "you choose:1"<<endl;
cout << "enter name: ";
cin >> name1;
cout << "enter matric marks: "<<endl;
cin >> matric1;
cout << "enter inter marks: "<<endl;
cin >> inter1;
cout << "enter ecat marks: "<<endl;
cin >> ecat1;
cout << "press any key to be continue...."<< endl;
cin >> anykeyToContinue;
printMenu(12, 18, string name1,
int matric1,
int inter1,
int ecat1,
string name2,
int matric2,
int inter2,
int ecat2,
float totalaggregate,
float total_aggregate,
string name,
int mmatric,
int minter,
int mecat,
char anykeyToContinue,
int number);
}
void printMenu(int x1, int y1, string name1,
int matric1,
int inter1,
int ecat1,
string name2,
int matric2,
int inter2,
int ecat2,
float totalaggregate,
float total_aggregate,
string name,
int mmatric,
int minter,
int mecat,
char anykeyToContinue,
int number)
{
cout << "*************************" << endl;
cout << "*                       *" << endl;
cout << "*      UET LAHORE       *" << endl;
cout << "*                       *" << endl;
cout << "*************************" << endl;
  gotoxy(x1,y1);
cout << " welcome to UET Admission Management System" << endl;

cout << " press 1 to enter details of first student!"<< endl;
cout << " press 2 to enter details of second student!"<< endl;
cout << " press 3 to calculate the aggregate of first student!"<< endl;
cout << " press 4 to calculate the aggregate of first student!"<< endl;
cout << " press 5 to display the student with rool number 01";

cout << " you chose: ";
cin >> number;
if(number==1)
{
value1( name1,matric1,inter1,ecat1, anykeyToContinue);
}
if(number==2)
{
value2( name2,matric2,inter2, ecat2);
 }
if (number==3)
{
value3(name1,matric1,inter1,ecat1,totalaggregate);
}
if (number==4)
{
value4(name2, matric2, inter2,ecat2,total_aggregate);
}
if (number==5)
{
compareaggregate(name1,name2,ecat1,ecat2);
}



}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void value2(string name2, int matric2,int inter2,int ecat2)
{ 
cout << "you choose:2"<<endl;
cout << "enter name: ";
cin >> name2;
cout << "enter matric marks:"<< endl;
cin >> matric2;
cout << "enter inter marks: "<<endl;
cin >> inter2;
cout << "enter ecat marks: "<<endl;
cin >> ecat2;
cout << "press any key to be continue...."<< endl;
}
void value3( string name1,int matric1,int inter1,int ecat1,float totalaggregate)
{
cout << "you choose:3"<<endl;
 totalaggregate=(matric1*100/1100)*0.3+(inter1*100/550)*0.3+(ecat1*100/400)*0.4; 
cout << " aggregate of: " << name1 << "is" << totalaggregate << endl;
cout << "press any key to be continue...."<< endl;
}
void value4( string name2,int matric2,int inter2,int ecat2,float total_aggregate)
{
cout << "you choose:4"<<endl;
 total_aggregate=(matric2*100/1100)*0.3+(inter2*100/550)*0.3+(ecat2*100/400)*0.4;
 cout << " aggregate of: " << name2 << "is"<< total_aggregate << endl;
cout << "press any key to be continue...."<< endl;
}
void compareaggregate(string name1,string name2,int ecat1,int ecat2)
{
cout <<" you choose:5" << endl;
if (ecat1>ecat2)
{
cout << "roll no 01 is" << name1 << endl;
}
if(ecat1<ecat2)
{
cout << " roll no 01 is" << name2 << endl;
cout << "press any key to be continue...."<< endl;
}
}