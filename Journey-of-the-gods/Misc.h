using namespace std; //For misc. functions and stuff.
#ifndef MISC_H
#define MISC_H
#include "headers.h"
extern int killcount;
extern int x;
extern int y;
extern int z;
extern int health;
extern int magic;
extern int helm;
extern int chest;
extern int leggings;
extern int boots;
extern int quest;
extern int enemyid;
extern int ehealth;
extern int ehelm;
extern int echest;
extern int eleggings;
extern int eboots;
extern int damage;
extern int primary;
extern int secondary;
extern int raceid;
extern int map[200][200][3]; //that might just be a LITTLE too big.
int gen(int x, int y) //Generates a random number between x and y.
{
	return rand()%(y-x+1)+x; //OUTPUTS ONLY 6!!! WTF
}

//MAP FUNCTIONS
void tile()
{
	/*
	Think we could make actual realistic map generation? It would take some thinking, but I think we could do it. Especially at this small of a scale.
	*/
	switch(map[x][y][z])
	{
	case 1:
		cout << "#"; //forest
		break;
	case 2:
		cout << "$"; //clearing
		break;
	case 3:
		cout << "?"; //plains
		break;
	case 4:
		cout << "@"; //hills
		break;
	case 5:
		cout << "^"; //mountains
		break;
	case 6:
		cout << "&"; //desert
		break;
	case 7:
		//plains
		break;
	case 8:
		//city
		break;
	case 9:
		//town
		break;
	case 10:
		//settlement
		break;
	case 11:
		//stuff
		break;
	case 12:
		//stuff
		break;
	case 13:
		//stuff
		break;
	case 14:
		//stuff
		break;
	case 15:
		//stuff
		break;
	case 16:
		//stuff
		break;
	case 17:
		//stuff
		break;
	case 18:
		//stuff
		break;
	case 19:
		//stuff
		break;
	case 20:
		//stuff
		break;
	case 21:
		//stuff
		break;
	case 22:
		//stuff
		break;
	case 23:
		//stuff
		break;
	case 24:
		//stuff
		break;
	case 25:
		//stuff
		break;
	case 26:
		//stuff
		break;
	case 27:
		//stuff
		break;
	case 28:
		//stuff
		break;
	case 29:
		//stuff
		break;
	case 30:
		//stuff
		break;
	case 31:
		//stuff
		break;
	case 32:
		//stuff
		break;
	case 33:
		//stuff
		break;
	case 34:
		//stuff
		break;
	case 35:
		//stuff
		break;
	case 36:
		//stuff
		break;
	case 37:
		//stuff
		break;
	case 38:
		//stuff
		break;
	case 39:
		//stuff
		break;
	case 40:
		//stuff
		break;
	case 41:
		//stuff
		break;
	case 42:
		//stuff
		break;
	case 43:
		//stuff
		break;
	case 44:
		//stuff
		break;
	case 45:
		//stuff
		break;
	case 46:
		//stuff
		break;
	case 47:
		//stuff
		break;
	case 48:
		//stuff
		break;
	case 49:
		//stuff
		break;
	case 50:
		//stuff
		break;
	default:
		while(1)
		{
			cout << "YOU GOT OUT OF THE MATRIX, AHHHH!";
		}
		break;
	}
}
void mapgen()
{
	int prevy=0, prevx=0;
	cout << "Generating Map..." << endl;
	x=0;
	y=0;
	z=3; //I WANT TO KILL MYSELF RIGHT NOW
	while(1)
	{
		map[x][y][z]=gen(1,6);
		cout << map[x][y][z];
	}
	x++;
	/*while(z>0)
	{*/
		while(y<200)//LOL it outputs nothing but ?'s'
		{
			while(x<200)
			{
				prevy=y-1;
				prevx=x-1;
				if(y>0)
				{
					if(map[x][prevy][z]=1)
					{
						map[x][y][z]=gen(1,2);	
					}
					if(map[x][prevy][z]=2)
					{
						map[x][y][z]=gen(1,3);	
					}
					if(map[x][prevy][z]=3)
					{
						map[x][y][z]=gen(2,4);	
					}
					if(map[x][prevy][z]=4)
					{
						map[x][y][z]=gen(3,5);	
					}
					if(map[x][prevy][z]=5)
					{
						map[x][y][z]=gen(4,6);	
					}
					if(map[x][prevy][z]=6)
					{
						map[x][y][z]=gen(5,7);	
						if(map[x][y-1][z]=7)
						{
							map[x][y][z]=3;	
						}
					}
				}else{
					if(map[prevx][y][z]=1)
					{
						map[x][y][z]=gen(1,2);	
					}
					if(map[prevx][y][z]=2)
					{
						map[x][y][z]=gen(1,3);	
					}
					if(map[prevx][y][z]=3)
					{
						map[x][y][z]=gen(2,4);	
					}
					if(map[prevx][y][z]=4)
					{
						map[x][y][z]=gen(3,5);	
					}
					if(map[prevx][y][z]=5)
					{
						map[x][y][z]=gen(4,6);	
					}
					if(map[prevx][y][z]=6)
					{
						map[x][y][z]=gen(5,7);	
						if(map[x][y][z]=7)
						{
							map[x][y][z]=3;	
						}
					}	
				}
				tile();
				x++;
			}
			y++;
			x=0;
			cout << endl;
		}
		y=0;
		/*z--;
	}*/
	map[199][199][2]=50;
	x=0; //y is already 0!
	z=2;
}
#endif
