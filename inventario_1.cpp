#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <process.h>
#include <ctime>
#include <cstring>

using namespace std;

void gotoxy(int x,int y) 
{  
	COORD CursorPos={x,y};  
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);  
	SetConsoleCursorPosition(hConsole,CursorPos);  
}
void Inventario()
{
	gotoxy(3,2);
	cout<<"INVENTARIO:";
	for(int i=3;i<14;i++)
	{
		gotoxy(i,0);
		cout<<"_";
	}

	for(int i=3;i<14;i++)
	{
	gotoxy(i,3);
	cout<<"_";	
	}
	for(int i=1;i<4;i++)
	{
		gotoxy(2,i);
		cout<<"|";
	}
	for(int i=1;i<4;i++)
	{
		gotoxy(14,i);
		cout<<"|";
	}
for(int i=2;i<31;i++) 
	{
		gotoxy(30,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(38,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(46,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(54,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(62,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(70,i);
		cout<<"|";
	} 
	for(int i=2;i<31;i++)
	{
		gotoxy(78,i);
		cout<<"|";
	} 
	for(int i=3;i<31;i++)
	{
		gotoxy(86,i);
		cout<<"|";
	} 
	for(int i=30;i<86;i++)
	{
		gotoxy(i,2);
		cout<<"_";
	}
	gotoxy(30,6);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,10);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,14);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,18);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,22);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,26);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
	gotoxy(30,30);
	cout<<"|_______|_______|_______|_______|_______|_______|_______";
}
int main()
{
		HWND hwnd=GetConsoleWindow();         //comandi usati per aprire inizialmente la console a schermo intero
 	ShowWindow(hwnd,SW_HIDE);
 	ShowWindow(hwnd,SW_MAXIMIZE);
 	sleep(1);
 	int a=getch();
 	cout<<a;
 	switch(a)
 	{
 		case 101:
 			Inventario();	
 			break;
	 }
	
}