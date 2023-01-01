#include <iostream>
#include <windows.h>
using namespace std; 
void gotoxy(int x,int y);
void printMenu();

void value3( string name1,float matric1,float inter1,float ecat1,float totalaggregate);
void value4( string name2,float matric2,float inter2,float ecat2,float total_aggregate);
void compareaggregate( string name1,float ecat1,string name2,float ecat2);
main()
{ 
string key;
int number;
string name1;
float matric1;
float inter1;
float ecat1;
string name2;
float matric2;
float inter2;
float ecat2;
float totalaggregate;
float total_aggregate;
while(true)
{
  system ("cls");
  printMenu();
  cout << " you chose: ";
  cin >> number;



if(number==1)
{
system("cls");
cout << "you choose:1";
cout << "enter name: ";
cin >> name1;
cout << "enter matric marks: ";
cin >> matric1;
cout << "enter inter marks: ";
cin >> inter1;
cout << "enter ecat marks: ";
cin >> ecat1;
cout << "press any key to be continue....";
cin >> key;
}
if(number==2)
{
system("cls");
cout << "you choose:2"<<endl;
cout << "enter name: ";
cin >> name2;
cout << "enter matric marks:";
cin >> matric2;
cout << "enter inter marks: ";
cin >> inter2;
cout << "enter ecat marks: ";
cin >> ecat2;
cout << "press any key to be continue...."<< endl;
cin >> key;
 }
if (number==3)
{
system("cls");
cout << "you choose:3"<<endl;
value3(name1,matric1,inter1,ecat1,totalaggregate);
cout << "press any key to be continue...."<< endl;
cin >> key;
}
if (number==4)
{
system("cls");
cout << "you choose:4"<<endl;
value4(name2, matric2, inter2,ecat2,total_aggregate);
cout << "press any key to be continue...."<< endl;
cin >> key;

}
if (number==5)
{
system("cls");
cout <<" you choose:5" << endl;
compareaggregate(name1,ecat1,name2,ecat2);
cout << "press any key to be continue...."<< endl;
cin >> key;
}
}
}
void printMenu()
{
cout << "*************************" << endl;
cout << "*                       *" << endl;
cout << "*      UET LAHORE       *" << endl;
cout << "*                       *" << endl;
cout << "*************************" << endl;
  gotoxy(6,9);
cout << " welcome to UET Admission Management System" << endl;
cout << endl << endl;
cout << " press 1 to enter details of first student!"<< endl;
cout << " press 2 to enter details of second student!"<< endl;
cout << " press 3 to calculate the aggregate of first student!"<< endl;
cout << " press 4 to calculate the aggregate of first student!"<< endl;
cout << " press 5 to display the student with rool number 01"<< endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void value3( string name1,float matric1,float inter1,float ecat1,float totalaggregate)
{
totalaggregate=0.3*(matric1 / 1100 * 100)+0.3 * (inter1 / 550 * 100)+ 0.4 * (ecat1/400*100); 

cout << " Aggregate of: " << name1 << " is " << totalaggregate << endl;
 
}
void value4( string name2,float matric2,float inter2,float ecat2,float total_aggregate)
{

 total_aggregate=0.3*(matric2/1100*100)+0.3*(inter2/550*100)+0.4*(ecat2/400*100);
 cout << " Aggregate of: " << name2 << " is "<< total_aggregate << endl;

}
void compareaggregate(string name1,float ecat1,string name2,float ecat2)
{

string student1;
student1=name1;

if (ecat2>ecat1)
{
student1=name2;
}
cout << "Roll no 01 is " << student1 << endl;

}