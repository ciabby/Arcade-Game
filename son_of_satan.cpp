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
int main()
{
	getch();
	gotoxy(147,1);
	cout<<"     /)   (\\";
	gotoxy(147,2);
	cout<<"    ( )   \\ )";
	gotoxy(147,3);
	cout<<"   / )     ( \\";
	gotoxy(147,4);
	cout<<"  (  (_____)  )";
	gotoxy(147,5);
	cout<<"  |           |";
	gotoxy(147,6);
	cout<<"  |  ()   ()  |";
	gotoxy(147,7);
	cout<<"  |  ()   ()  |";
	gotoxy(147,8);
	cout<<"   \\ ()   () /";
	gotoxy(147,9);
	cout<<"    |       |";
	gotoxy(147,10);
	cout<<"    | /\\ /\\ |";
	gotoxy(147,11);
	cout<<"    \\ \\/ \\/ /";
	gotoxy(147,12);
	cout<<"     |      |";
	gotoxy(147,13);
	cout<<"     \\ /()\\ /";
	gotoxy(147,14);
	cout<<"  __/_|\\||/ |_\\__";
	gotoxy(147,15);
	cout<<" /    \\~~~~/      \\";
	gotoxy(147,16);
	cout<<"(                  )";
	gotoxy(147,17);
	cout<<"(   |         |    )";
	gotoxy(147,18);
	cout<<"(   |         |    )";
	gotoxy(147,19);
	cout<<"(   | \\__ __/ |    )";
	gotoxy(147,20);
	cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	gotoxy(10,7);
		char f[]="hai incontrato: SON OF SATAN.";
		int len=strlen(f);
		for(int i=0;i<len;i++)
		{
			cout<<f[i];
			Sleep(100);
		}
		gotoxy(112,15);
		char a[]="IL FIGLIO TANTO ODIATO";
		len=strlen(a);
		for(int i=0;i<len;i++)
		{
			cout<<a[i];
			Sleep(100);
		}
		gotoxy(113,16);
		char b[]="DA SATANA DA UNA FORZA";
		len=strlen(b);
		for(int i=0;i<len;i++)
		{
			cout<<b[i];
			Sleep(100);
		}
		gotoxy(110,17);
		char c[]="MOSTRUOSA TALMENTE TANTO DA";
		len=strlen(c);
		for(int i=0;i<len;i++)
		{
			cout<<c[i];
			Sleep(100);
		}
		gotoxy(111,18);
		char d[]="TENERE LONTANO TUTTI I NEMICI.";
		len=strlen(d);
		for(int i=0;i<len;i++)
		{
			cout<<d[i];
			Sleep(100);
		}
		gotoxy(115,19);
		char e[]="DOVE I SUOI COLPI TOLGONO";
		len=strlen(e);
		for(int i=0;i<len;i++)
		{
			cout<<e[i];
			Sleep(100);
		}
		gotoxy(112,20);
		char h[]="30 HP A ATTACCO";
		len=strlen(h);
		for(int i=0;i<len;i++)
		{
			cout<<h[i];
			Sleep(100);
		}
}