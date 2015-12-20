#ifndef MONSTERS_H
#define MONSTERS_H


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>

using namespace std;
class monster{
private:
    string monsterName;
    int maxHp;
    int curHp;
    int level;
    int xp;
    int maxDmg;
    int minDmg;
    int defence;
public:
    monster();
    void showStats();
    string showName(){ return monsterName;}
    int giveXP(){return xp;}
    void takeDamage(int /*damage taken*/);
    int returnHp(){return curHp;}
    int attack();
    //~monsterr();
};
#endif // MONSTERS_H
