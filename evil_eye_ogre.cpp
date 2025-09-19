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
	int a;
	a=getch();
	if(a=='+') {
		
		gotoxy(152,0);
		cout<<"_";
		gotoxy(151,1);
		cout<<"/ \\";
		gotoxy(151,2);
		cout<<"| |";
		gotoxy(149,3);
		cout<<"_/   \\_";
		gotoxy(146,4);
		cout<<"__/       \\__";
		gotoxy(145,5);
		cout<<"/             \\";
		gotoxy(145,6);
		cout<<"|             |";
		gotoxy(144,7);
		cout<<"/               \\";
		gotoxy(144,8);
		cout<<"|    _______     |";
		gotoxy(143,9);
		cout<<"/    /       \\    \\";
		gotoxy(143,10);
		cout<<"|   /    __   \\    |";
		gotoxy(143,11);
		cout<<"\\__|   /   \\   |__/";
		gotoxy(146,12);
		cout<<"|  |  _  |  |";
		gotoxy(146,13);
		cout<<"|  | (_) |  |";
		gotoxy(146,14);
		cout<<"|  |     |  |";
		gotoxy(145,15);
		cout<<"/|   \\___/   |\\";
		gotoxy(144,16);
		cout<<"|     _____   | |";
		gotoxy(144,17);
		cout<<"| |  /     \\    |";
		gotoxy(145,18);
		cout<<"\\|  |      | |/";
		gotoxy(146,19);
		cout<<"|  |      | |";
		gotoxy(146,20);
		cout<<"|  \\      / |   __";
		gotoxy(146,21);
		cout<<"|   \\____/  |  /  \\";
		gotoxy(146,22);
		cout<<"\\           / |    |";
		gotoxy(147,23);
		cout<<"\\         /  |    |";
		gotoxy(146,24);
		cout<<"/ \\______/ \\   \\  /";
		gotoxy(143,25);
		cout<<"__/            \\_/|  |\\";
		gotoxy(142,26);
		cout<<"/                //|  |\\\\";
		gotoxy(142,27);
		cout<<"|                \\\\|  |//";
		gotoxy(142,28);
		cout<<"|   /           \\ \\\\__//";
		gotoxy(142,29);
		cout<<"|   |           |  \\__/";
		gotoxy(142,30);
		cout<<"|   |           |   | |";
		gotoxy(142,31);
		cout<<"|   |           |   | |";
		gotoxy(142,32);
		cout<<"|   | \\__/ \\__/ |   | |";
		gotoxy(142,33);
		cout<<"|___|___________|___|_|";
		gotoxy(10,7);
		char f[]="hai incontrato: EVIL EYE OGRE.";
		int len=strlen(f);
		for(int i=0;i<len;i++)
		{
			cout<<f[i];
			Sleep(100);
		}
		gotoxy(112,15);
		char a[]="I SUOI ATTACCHI TOLGONO";
		len=strlen(a);
		for(int i=0;i<len;i++)
		{
			cout<<a[i];
			Sleep(100);
		}
		gotoxy(113,16);
		char b[]="20HP A COLPO, DOVE OGNI";
		len=strlen(b);
		for(int i=0;i<len;i++)
		{
			cout<<b[i];
			Sleep(100);
		}
		gotoxy(110,17);
		char c[]="COLPO CHE INFLIGGE DIMINUISCE";
		len=strlen(c);
		for(int i=0;i<len;i++)
		{
			cout<<c[i];
			Sleep(100);
		}
		gotoxy(111,18);
		char d[]="LA FORZA DEL COLPO CRITICO";
		len=strlen(d);
		for(int i=0;i<len;i++)
		{
			cout<<d[i];
			Sleep(100);
		}
		gotoxy(115,19);
		char e[]="DEL GIOCATORE DI 2 PUNTI";
		len=strlen(e);
		for(int i=0;i<len;i++)
		{
			cout<<e[i];
			Sleep(100);
		}
}
}