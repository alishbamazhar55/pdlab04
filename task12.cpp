#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
void maze();
void move(int x,int y); 
main()
{
  system("cls");
  maze(); 
  int x=4;
  int y=2;
while (true)
{
  move(x,y);
 if (y < 7)
{
   y=y+1;
}
  if (y== 7)
{
 gotoxy(x,y-1);
cout <<" ";
  y=2;
}
  }
}

  void maze()
{ 
cout << " ##########################       "<< endl;
cout << " #                        #       "<< endl;
cout << " #                        #       "<< endl;
cout << " #                        #       "<< endl;
cout << " #                        #       "<< endl;
cout << " #                        #       "<< endl;
cout << " #                        #        "<< endl;
cout << " ##########################        "<< endl;
}
void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
 void move(int x,int y)
{ 

gotoxy(x,y-1);
cout << " ";
gotoxy(x,y);
cout << "P ";
Sleep (200);
}