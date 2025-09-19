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
int len=0;
string slot_1="VUOTO";
string slot_2="VUOTO";
string slot_3="VUOTO";
string slot_4="VUOTO";
void Son_Of_Satan(int len)
{
	gotoxy(75,20);
		char f[]="hai incontrato: SON OF SATAN.";
		len=strlen(f);
		for(int i=0;i<len;i++)
		{
			cout<<f[i];
			Sleep(100);
		}
	sleep(1);
	system("cls");
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
		gotoxy(0,40);
}
void Evil_Eye_Ogre(int len)
{
		gotoxy(75,20);
		char f[]="hai incontrato: EVIL EYE OGRE.";
		len=strlen(f);
		for(int i=0;i<len;i++)
		{
			cout<<f[i];
			Sleep(100);
		}
		
		sleep(1);
		system("cls");
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
		gotoxy(0,40);
}
void Naughty_Sorceress(int len)
{
	gotoxy(75,20);
	char e[]="hai incontrato: NAUGHTY SORCERESS.";
		len=strlen(e);
		for(int i=0;i<len;i++)
		{
			cout<<e[i];
			Sleep(100);
		}
		sleep(1);
	system("cls");
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
		gotoxy(0,40);
}
void Inventario()
{
	system("cls");
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
void Pausa()
{
	for(int i=3;i<31;i++)
	{
		gotoxy(29,i);
		cout<<"|";
	} 
	for(int i=30;i<86;i++)
	{
		gotoxy(i,30);
		cout<<"_";
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
	gotoxy(30,3);
	cout<<"GIOCO IN PAUSA";
	for(int i=30;i<45;i++)
	{
		gotoxy(i,4);
		cout<<"_";
	}
	for(int i=3; i<5;i++)
	{
		gotoxy(45,i);
		cout<<"|";
	}
	gotoxy(48,10);
	cout<<"Riprendi A Giocare";
	gotoxy(47,8);
	cout<<"___________________";
	gotoxy(47,9);
	cout<<"|";
	gotoxy(66,9);
	cout<<"|";
	gotoxy(47,10);
	cout<<"|";
	gotoxy(66,10);
	cout<<"|";
	gotoxy(47,11);
	cout<<"|__________________|";
	gotoxy(51,14);
	cout<<"Impostazioni";
	gotoxy(50,12);
	cout<<"_____________";
	gotoxy(50,15);
	cout<<"|____________|";
	gotoxy(50,14);
	cout<<"|";
	gotoxy(63,14);
	cout<<"|";
	gotoxy(50,13);
	cout<<"|";
	gotoxy(63,13);
	cout<<"|";
	gotoxy(53,18);
	cout<<"comandi";
	gotoxy(52,16);
	cout<<"________";
	gotoxy(52,19);
	cout<<"|_______|";
	gotoxy(52,18);
	cout<<"|";
	gotoxy(60,18);
	cout<<"|";
	gotoxy(52,17);
	cout<<"|";
	gotoxy(60,17);
	cout<<"|";
	gotoxy(55,22);
	cout<<"esci";
	gotoxy(53,20);
	cout<<"______";
	gotoxy(53,23);
	cout<<"|_____|";
	gotoxy(53,22);
	cout<<"|";
	gotoxy(59,22);
	cout<<"|";
	gotoxy(53,21);
	cout<<"|";
	gotoxy(59,21);
	cout<<"|";
}
void Info()
{
	gotoxy(75,23);
	cout<<"presentazione di tutti i bot: ";
	sleep(1);
	system("cls");
	Naughty_Sorceress(len);
	sleep(2);
	system("cls");
	gotoxy(75,23);
	cout<<"E ORA: ";
	sleep(1);
	system("cls");
	Evil_Eye_Ogre(len);
	sleep(2);
	system("cls");
	sleep(1);
	gotoxy(75,23);
	cout<<"E PER FINIRE:";
	sleep(1);
	system("cls");
	Son_Of_Satan(len);
	sleep(2);
	system("cls");
	gotoxy(5,5);
	cout<<"per L'inventario premere";
	gotoxy(33,3);
	cout<<"_____";
	for(int i=4;i<6;i++)
	{
	gotoxy(33,i);
	cout<<"|";
	}
	for(int i=4;i<6;i++)
	{
	gotoxy(37,i);
	cout<<"|";
	}
	gotoxy(33,6);
	cout<<"|___|";
	gotoxy(35,5);
	cout<<"E";
	gotoxy(5,9);
	cout<<"per la mappa premere";
	gotoxy(33,7);
	cout<<"_____";
	for(int i=8;i<10;i++)
	{
	gotoxy(33,i);
	cout<<"|";
	}
	
	for(int i=8;i<10;i++)
	{
	gotoxy(37,i);
	cout<<"|";
	}
	gotoxy(33,10);
	cout<<"|___|";
	gotoxy(35,9);
	cout<<"M";
	
	gotoxy(5,13);
	cout<<"per la spalla premere";
	gotoxy(33,11);
	cout<<"_____";
	for(int i=12;i<14;i++)
	{
	gotoxy(33,i);
	cout<<"|";
	}
	
	for(int i=12;i<14;i++)
	{
	gotoxy(37,i);
	cout<<"|";
	}
	gotoxy(33,14);
	cout<<"|___|";
	gotoxy(35,13);
	cout<<"P";
	gotoxy(5,17);
	cout<<"per La Pausa premere";
	gotoxy(33,15);
	cout<<"_____";
	for(int i=16;i<18;i++)
	{
	gotoxy(33,i);
	cout<<"|";
	}
	
	for(int i=16;i<18;i++)
	{
	gotoxy(37,i);
	cout<<"|";
	}
	gotoxy(33,18);
	cout<<"|___|";
	gotoxy(34,17);
	cout<<"TAB";
}
void Menu_Magia()
{
	gotoxy(3,2);
	cout<<"Menu Magie:";
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
	srand(time(NULL));
 	Info();
	sleep(1);
	system("cls");
	int a=getch();
	int b;
	sleep(2);
	while(true)
	{
	switch(a)
	{
		case 101: // E
			Inventario();
			b=getch();
			if(b==101)
			{
				system("cls");
				a=getch();
				break;
			}
		case 9: // TAB
			Pausa();
			b=getch();
			if(b==9)
			{
				system("cls");
				a=getch();
				break;
			}
		case 113: // Q
			Menu_Magia();
			b=getch();
			if(b==113)
			{
				system("cls");
				a=getch();
				break;
			}
	}
}
}