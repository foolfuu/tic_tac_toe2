#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int player1 , player2;
	int X , O;
	int min = 1 , max = 3;
	char a = ' ',b = ' ',c = ' ', d = ' ',e = ' ',f = ' ', g = ' ',h = ' ',i = ' ';
	char xo;
	int player;
	srand(time(0));
	if(rand()%(max - min) + min == 1)xo = 'X';
	else{xo = 'O';}
	///
	cout<<"Welcome to this game!!"<<endl;
	cout<<"*"<<"1"<<"*"<<"2"<<"*"<<"3"<<"*"<<endl
			<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl	
			<<"*"<<"4"<<"*"<<"5"<<"*"<<"6"<<"*"<<endl
			<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
			<<"*"<<"7"<<"*"<<"8"<<"*"<<"9"<<"*"<<endl;
	cout<<"Please press enter key to start";
	cin.ignore();
	Sleep(700);
	///
	for(int ert = 0 ; ert < 20 ; ert++)
	{
		
		system("cls");
		cout<<"*"<<a<<"*"<<b<<"*"<<c<<"*"<<endl
			<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl	
			<<"*"<<d<<"*"<<e<<"*"<<f<<"*"<<endl
			<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<"*"<<endl
			<<"*"<<g<<"*"<<h<<"*"<<i<<"*"<<endl;
		cout<<"----------"<<endl<<endl
			<<"----------"<<endl;
		if(a == 'X' and b == 'X' and c == 'X' or d == 'X' and e == 'X' and f == 'X' or g == 'X' and h == 'X' and i == 'X' /**/or/**/ a == 'X' and d == 'X' and g == 'X' or b == 'X' and e == 'X' and h == 'X' or c == 'X' and f == 'X' and i == 'X' /**/or/**/ a == 'X' and e == 'X' and i == 'X' or c == 'X' and e == 'X' and g == 'X')
		{
			cout<<"X a win!";
			cin.ignore();
			cin.ignore();
			return 1;
		}
		if(a == 'O' and b == 'O' and c == 'O' or d == 'O' and e == 'O' and f == 'O' or g == 'O' and h == 'O' and i == 'O' /**/or/**/ a == 'O' and d == 'O' and g == 'O' or b == 'O' and e == 'O' and h == 'O' or c == 'O' and f == 'O' and i == 'O' /**/or/**/ a == 'O' and e == 'O' and i == 'O' or c == 'O' and e == 'O' and g == 'O')
		{
			cout<<"O a win!";
			cin.ignore();
			cin.ignore();
			return 1;
		}
		if(a != ' ' and b != ' ' and c != ' ' and d != ' ' and e != ' ' and f != ' ' and g != ' ' and h != ' ' and i != ' ')
		{
			break;
		}
		if(xo == 'X')
		{
			while(1)
			{
				cout<<"player X : ";
				cin>>player;
				if(player == 1 and a == ' ')
				{
					a = xo;
					break;
				}
				else if(player == 2 and b == ' ')
				{
					b = xo;
					break;
				}
				else if(player == 3 and c == ' ')
				{
					c = xo;
					break;
				}
				else if(player == 4 and d == ' ')
				{
					d = xo;
					break;
				}
				else if(player == 5 and e == ' ')
				{
					e = xo;
					break;
				}
				else if(player == 6 and f == ' ')
				{
					f = xo;
					break;
				}
				else if(player == 7 and g == ' ')
				{
					g = xo;
					break;
				}
				else if(player == 8 and h == ' ')
				{
					h = xo;
					break;
				}
				else if(player == 9 and i == ' ')
				{
					i = xo;
					break;
				}
				
			
			}
			
		}
		else
		{
			cout<<"player O : ";
			Sleep(700);
			if(ert == 0)
			{
				e = xo;
			}
			else if(ert == 1)
			{
				if(b == 'X' or d == 'X' or h == 'X' or f == 'X')
				{
					int Max = 5 , Min = 1 , ra;
					srand(time(0));
					ra = rand()%(Max - Min) + Min;
					if(ra == 1)a = xo;
					else if(ra == 2)c = xo;
					else if(ra == 3)g = xo;
					else if(ra == 4)i = xo;
				}
				else if(e == 'X')
				{
					int Max = 5 , Min = 1 , ra;
					srand(time(0));
					ra = rand()%(Max - Min) + Min;
					if(ra == 1)a = xo;
					else if(ra == 2)c = xo;
					else if(ra == 3)g = xo;
					else if(ra == 4)i = xo;
				}
				else{e = xo;}
			}
			else if(a == 'O' and b == 'O' and c == ' ')c = xo;
			else if(b == 'O' and c == 'O' and a == ' ')a = xo;
			else if(c == 'O' and a == 'O' and b == ' ')b = xo;
			else if(d == 'O' and e == 'O' and f == ' ')f = xo;
			else if(e == 'O' and f == 'O' and d == ' ')d = xo;
			else if(f == 'O' and d == 'O' and e == ' ')e = xo;
			else if(g == 'O' and h == 'O' and i == ' ')i = xo;
			else if(h == 'O' and i == 'O' and g == ' ')g = xo;
			else if(i == 'O' and g == 'O' and h == ' ')h = xo;
			
			else if(a == 'O' and d == 'O' and g == ' ')g = xo;
			else if(d == 'O' and g == 'O' and a == ' ')a = xo;
			else if(g == 'O' and a == 'O' and d == ' ')d = xo;
			else if(b == 'O' and e == 'O' and h == ' ')h = xo;
			else if(e == 'O' and h == 'O' and b == ' ')b = xo;
			else if(h == 'O' and b == 'O' and e == ' ')e = xo;
			else if(c == 'O' and f == 'O' and i == ' ')i = xo;
			else if(f == 'O' and i == 'O' and c == ' ')c = xo;
			else if(i == 'O' and c == 'O' and f == ' ')f = xo;
			
			else if(a == 'O' and e == 'O' and i == ' ')i = xo;
			else if(e == 'O' and i == 'O' and a == ' ')a = xo;
			else if(i == 'O' and a == 'O' and e == ' ')e = xo;
			else if(c == 'O' and e == 'O' and g == ' ')g = xo;
			else if(e == 'O' and g == 'O' and c == ' ')c = xo;
			else if(g == 'O' and c == 'O' and e == ' ')e = xo;
			///
			else if(a == 'X' and b == 'X' and c == ' ')c = xo;
			else if(b == 'X' and c == 'X' and a == ' ')a = xo;
			else if(c == 'X' and a == 'X' and b == ' ')b = xo;
			else if(d == 'X' and e == 'X' and f == ' ')f = xo;
			else if(e == 'X' and f == 'X' and d == ' ')d = xo;
			else if(f == 'X' and d == 'X' and e == ' ')e = xo;
			else if(g == 'X' and h == 'X' and i == ' ')i = xo;
			else if(h == 'X' and i == 'X' and g == ' ')g = xo;
			else if(i == 'X' and g == 'X' and h == ' ')h = xo;
			
			else if(a == 'X' and d == 'X' and g == ' ')g = xo;
			else if(d == 'X' and g == 'X' and a == ' ')a = xo;
			else if(g == 'X' and a == 'X' and d == ' ')d = xo;
			else if(b == 'X' and e == 'X' and h == ' ')h = xo;
			else if(e == 'X' and h == 'X' and b == ' ')b = xo;
			else if(h == 'X' and b == 'X' and e == ' ')e = xo;
			else if(c == 'X' and f == 'X' and i == ' ')i = xo;
			else if(f == 'X' and i == 'X' and c == ' ')c = xo;
			else if(i == 'X' and c == 'X' and f == ' ')f = xo;
			
			else if(a == 'X' and e == 'X' and i == ' ')i = xo;
			else if(e == 'X' and i == 'X' and a == ' ')a = xo;
			else if(i == 'X' and a == 'X' and e == ' ')e = xo;
			else if(c == 'X' and e == 'X' and g == ' ')g = xo;
			else if(e == 'X' and g == 'X' and c == ' ')c = xo;
			else if(g == 'X' and c == 'X' and e == ' ')e = xo;
			///
			else if(a == xo and b == ' ' and c == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)b = xo;
				else{c = xo;}
			}
			else if(b == xo and a == ' ' and c == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)a = xo;
				else{c = xo;}
			}
			else if(c == xo and b == ' ' and a == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)b = xo;
				else{a = xo;}
			}
			//
			else if(d == xo and e == ' ' and f == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)e = xo;
				else{f = xo;}
			}
			else if(e == xo and d == ' ' and f == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)d = xo;
				else{f = xo;}
			}
			else if(f == xo and e == ' ' and d == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)d = xo;
				else{e = xo;}
			}
			//
			else if(g == xo and h == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)i = xo;
				else{h = xo;}
			}
			else if(h == xo and g == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)i = xo;
				else{g = xo;}
			}
			else if(i == xo and g == ' ' and h == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)h = xo;
				else{g = xo;}
			}
			//
			else if(a == xo and d == ' ' and g == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)g = xo;
				else{d = xo;}
			}
			else if(d == xo and a == ' ' and g == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)g = xo;
				else{a = xo;}
			}
			else if(g == xo and d == ' ' and a == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)d = xo;
				else{a = xo;}
			}
			//
			else if(b == xo and e == ' ' and h == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)h = xo;
				else{e = xo;}
			}
			else if(e == xo and b == ' ' and h == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)b = xo;
				else{h = xo;}
			}
			else if(h == xo and e == ' ' and b == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)b = xo;
				else{e = xo;}
			}
			//
			else if(c == xo and f == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)i = xo;
				else{f = xo;}
			}
			else if(f == xo and c == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)c = xo;
				else{i = xo;}
			}
			else if(i == xo and f == ' ' and c == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)c = xo;
				else{f = xo;}
			}
			//
			else if(a == xo and e == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)i = xo;
				else{e = xo;}
			}
			else if(e == xo and a == ' ' and i == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)i = xo;
				else{a = xo;}
			}
			else if(i == xo and e == ' ' and a == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)e = xo;
				else{a = xo;}
			}
			//
			else if(c == xo and e == ' ' and g == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)e = xo;
				else{g = xo;}
			}
			else if(e == xo and c == ' ' and g == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)g = xo;
				else{c = xo;}
			}
			else if(g == xo and e == ' ' and c == ' ')
			{
				srand(time(0));
				if(rand()%(max - min) + min == 1)c = xo;
				else{e = xo;}
			}
			else
			{
				if(a == ' ')a = xo;
				else if(b == ' ')b = xo;
				else if(c == ' ')c = xo;
				else if(d == ' ')d = xo;
				else if(e == ' ')e = xo;
				else if(f == ' ')f = xo;
				else if(g == ' ')g = xo;
				else if(h == ' ')h = xo;
				else if(i == ' ')i = xo;
			}
			if(a != ' ' and b != ' ' and c != ' ' and d != ' ' and e != ' ' and f != ' ' and g != ' ' and h != ' ' and i != ' ')break;
		}
		if(xo == 'X')xo = 'O';
		else{xo = 'X';}
	}
	cout<<endl<<"X = O!";
	cin.ignore();
	cin.ignore();
	Sleep(1000);
	return 0;
}
              