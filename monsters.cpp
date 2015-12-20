#include "monsters.h"

/*
class monster{
private:
    string monsterName;
    int maxHp;
    int curHp
    int level;
    int xp;
    int maxDmg;
    int minDmg;
    int defence;
public:
    monster();
    void showStats();
    string showName(){ return monsterName;}
    int giveXP() {return xp;}
    void takeDamageReturnhp(int damage taken);
    int attack();
    //~monsterr();
};
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>

using namespace std;

monster::monster()
{
    monsterName = "Goblin";
    maxHp = 15;
    level = 1;
    xp = 200;
    maxDmg = 7;
    minDmg = 1;
    defence = 2;
    curHp = maxHp;

}

void monster::showStats()
{
    cout << "The monster has " << defence << " defence and gives " << xp << " xp" << endl;

}

void monster::takeDamage(int damage)
{
    damage = damage - defence;
    curHp = curHp - damage;
    cout << "You have dealt " << damage << " damage!!" << endl;
    cout << "monster has " << curHp << " health!" << endl;


}
int monster::attack()
{
    cout << "The " << monsterName << " attacks!" << endl;

    srand(time(NULL));

    int damage = 0;

    while (damage < minDmg)
        damage = rand() % maxDmg + 1;
    return damage;
}


