#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <process.h>
#include <ctime>
#include <cstring>

using namespace std;
string slot_1="VUOTO";
string slot_2="VUOTO";
string slot_3="VUOTO";
string slot_4="VUOTO";
void gotoxy(int x,int y) 
{  
	COORD CursorPos={x,y};  
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsole,CursorPos);  
}
void Menu_Magia()
{
	gotoxy(76,20);
	cout<<"___";
	gotoxy(75,21);
	cout<<"|";
	gotoxy(75,22);
	cout<<"|___|";
	gotoxy(79,21);
	cout<<"|";
	gotoxy(77,7);
	cout<<"1";
	gotoxy(75,8);
	cout<<slot_1;
	gotoxy(77,35);
	cout<<"3";
	gotoxy(75,36);
	cout<<slot_3;
	gotoxy(45,21);
	cout<<"4";
	gotoxy(43,22);
	cout<<slot_4;
	gotoxy(110,21);
	cout<<"2";
	gotoxy(108,22);
	cout<<slot_2;
	gotoxy(2,40);
}
int main()
{
	HWND hwnd=GetConsoleWindow();         //comandi usati per aprire inizialmente la console a schermo intero
 	ShowWindow(hwnd,SW_HIDE);
 	ShowWindow(hwnd,SW_MAXIMIZE);
	Menu_Magia();
}