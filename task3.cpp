#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void name1();
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 
int main()
{
  system ("cls");

   name1();
	
}
void name1()
{
gotoxy(20,1);
cout << "    ##      #        ######    #######  #    #   #####        ## "<< endl;
gotoxy(20,2);
cout << "   #  #     #          #       #        #    #   #    #      #  # "<< endl;
gotoxy(20,3);
cout << "  ######    #          #       #######  ######   #####      ###### "<< endl;
gotoxy(20,4);
cout << " #      #   #          #             #  #    #   #    #    #      # "<< endl;
gotoxy(20,5);
cout << "#        #  #######  ######    #######  #    #   #####    #        # "<<endl;

}
