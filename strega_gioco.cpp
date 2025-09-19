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
	gotoxy(156,1);
	cout<<"O";
	gotoxy(154,2);
	cout<<"_/ \\_";
	gotoxy(153,3);
	cout<<"/     |";
	gotoxy(151,4);
	cout<<"_|       \\";
	gotoxy(150,5);
	cout<<"/          |";
	gotoxy(149,6);
	cout<<"/          /";
	gotoxy(149,7);
	cout<<"|    __    |";
	gotoxy(148,8);
	cout<<"(_   /  \\_   \\";
	gotoxy(148,9);
	cout<<"/  \\/      \\  |";
	gotoxy(148,10);
	cout<<"|  /        |\\)";
	gotoxy(147,11);
	cout<<"/  | ()   () |\\";
	gotoxy(146,12);
	cout<<"(  /|    |      |";
	gotoxy(146,13);
	cout<<"(  |        . |/";
	gotoxy(147,14);
	cout<<"(  \\| (\\_/)  |";
	gotoxy(148,15);
	cout<<"(__|  \\~/   /";
	gotoxy(151,16);
	cout<<"\\        |";
	gotoxy(152,17);
	cout<<"|     _/";
	gotoxy(151,18);
	cout<<"/ \\~__~|\\_";
	gotoxy(149,19);
	cout<<"_/          \\   |";
	gotoxy(148,20);
	cout<<"/             | /|\\";
	gotoxy(148,21);
	cout<<"|  |       |  | \\ /";
	gotoxy(148,22);
	cout<<"|  |       \\  \\_(_)"; 
	gotoxy(148,23);
	cout<<"|  |        \\   (_)";
	gotoxy(148,24);
	cout<<"|  |         \\__(_)";
	gotoxy(148,25);
	cout<<"|  |\\________/| (_)";
	gotoxy(148,26);
	cout<<"\\__/          | \\_/";
	gotoxy(150,27);
	cout<<"|           |";
	gotoxy(150,28);
	cout<<"|           |";
	gotoxy(149,29);
	cout<<"/            \\";
	gotoxy(149,30);
	cout<<"\\____/~~~~~~~/";
	gotoxy(10,7);
	char e[]="hai incontrato: NAUGHTY SORCERESS.";
		int len=strlen(e);
		for(int i=0;i<len;i++)
		{
			cout<<e[i];
			Sleep(100);
		}
	gotoxy(112,15);
		char a[]="OGNI 10 SECONDI LA MAGA";
		len=strlen(a);
		for(int i=0;i<len;i++)
		{
			cout<<a[i];
			Sleep(100);
		}
		gotoxy(113,16);
		char b[]="SI CURA DI 2 HP E RALLENTA ";
		len=strlen(b);
		for(int i=0;i<len;i++)
		{
			cout<<b[i];
			Sleep(100);
		}
		gotoxy(110,17);
		char c[]="DI 0.5 SECONDI LA RICARICA DEL";
		len=strlen(c);
		for(int i=0;i<len;i++)
		{
			cout<<c[i];
			Sleep(100);
		}
		gotoxy(111,18);
		char d[]="ATTACCO LEGGERO DEL GIOCATORE";
		len=strlen(d);
		for(int i=0;i<len;i++)
		{
			cout<<d[i];
			Sleep(100);
		}
}