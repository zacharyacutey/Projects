#ifndef QUESTS_H
#define QUESTS_H
#include "headers.h"
using namespace std; //All Quest-related stuff
extern int gold;
extern int killcount;
extern int x;
extern int y;
extern int z;
extern int health;
extern int medkit;
extern int magic;
extern int playerarmor;
extern int quest;
extern int enemyid;
extern int ehealth;
extern int enemyarmor;
extern int playerweapon;
extern char raceid;
extern string enemy;
extern int damage;
extern int map[200][200][3];
extern int visited[200][200][3]; //for quests or how peeps react to you.
extern int smedkit[200][200][3]; //for shops
extern int armor[200][200][3]; //for shops
extern int weapon[200][200][3]; //for shops
#endif
