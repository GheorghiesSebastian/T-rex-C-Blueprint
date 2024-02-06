#include <iostream>
#include <Windows.h> 
#include <conio.h>
#include <thread> 


using std::cout;
using std::cin;
using std::string;
using std::size;


int alpha = 0;
int beta = 0;

int m = 0;
int c = 0;
int l = 0;
int z = 0;
int p = 0;

int jump = 0;
char input = 0;


int main()
{
	string add =        "/";
	string space =      " ";
	string hitbox =  "      ";
	string leg =      "mm mm ";
	string body =     "mmmmm ";
	string neck =     "   mm ";
	string head =     "    mm";

	string floor = "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////";
	string layer1 = "      mm mm                                                                                                             "; 
	string layer2 = "      mmmmm                                                                                                             ";
	string layer3 = "         mm                                                                                                             ";
	string layer4 = "          mm                                                                                                            ";
	string layer5 = "                                                                                                                        ";
	string layer6 = "                                                                                                                        ";
	string layer7 = "                                                                                                                        ";


	cout << "for how many seconds would you like this game to be ran for :";
	cin >> alpha;

	for (m = 1; m <= alpha*20 ; ++m)
	{
		
		if (jump >0) 
		{
			jump -= 1;
		}
		if (GetKeyState(VK_LBUTTON) & 0x8000)
		{
			if (jump >= 0)
			{
				jump = 7;
			}
		}

		if (jump == 0)
		{
			layer1.replace(7, 6, leg);
			layer2.replace(7, 6, body);
		}

		if (layer1[6] == 'm') 
		{
			layer1.replace(6, 1, space);
		}
		if (layer2[6] == 'm')
		{
			layer2.replace(6, 1, space);
		}


		if (c % 70 == 0 || c % 150 == 0 || c % 80 == 0)
		{
			layer1.append(add);
		}                                                                                                                        
		else
		{
			layer1.append(space);
		}


		if (c % 70 == 0)
		{
			layer2.append(add);
		}
		else
		{
			layer2.append(space);
		}

		layer1.erase(1, 1); 
		layer2.erase(1, 1);


		system("cls");
		cout << layer7;
		cout << layer6;
		cout << layer5;
		cout << layer4;
		cout << layer3;
		cout << layer2;
		cout << layer1;
		cout << floor;

		if (jump == 7)
		{
			layer1.replace(6, 6, hitbox);
			layer2.replace(7, 6, leg);
			layer3.replace(7, 6, body);
			layer4.replace(7, 6, neck);
			layer5.replace(7, 6, head);
		}
		else if (jump == 6)
		{
			layer2.replace(7, 6, hitbox);
			layer3.replace(7, 6, leg);
			layer4.replace(7, 6, body);
			layer5.replace(7, 6, neck);
			layer6.replace(7, 6, head);
		}
		else if (jump == 5)
		{
			layer3.replace(7, 6, hitbox);
			layer4.replace(7, 6, leg);
			layer5.replace(7, 6, body);
			layer6.replace(7, 6, neck);
			layer7.replace(7, 6, head);
		}
		else if (jump == 4)
		{
			layer3.replace(7, 6, leg);
			layer4.replace(7, 6, body);
			layer5.replace(7, 6, neck);
			layer6.replace(7, 6, head);
			layer7.replace(7, 6, hitbox);
		}
		else if (jump == 3)
		{
			layer2.replace(7, 6, leg);
			layer3.replace(7, 6, body);
			layer4.replace(7, 6, neck);
			layer5.replace(7, 6, head);
			layer6.replace(7, 6, hitbox);
		}
		else if (jump == 2)
		{
			layer1.replace(7, 6, leg);
			layer2.replace(7, 6, body);
			layer3.replace(6, 6, neck);
			layer4.replace(6, 6, head);
			layer5.replace(7, 6, hitbox);
		}

		c += 1;
		Sleep(250);

	}

	return 0;
}












