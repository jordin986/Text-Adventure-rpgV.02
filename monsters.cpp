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

monster()
{
    monsterName = "Goblin";
    maxHp = 10;
    level = 1;
    xp = 200;
    maxDmg = 5;
    minDmg = 0;
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
    curHp = damage;
    cout << "monster has take " << damage << " damage" << endl;


}
int monster::attack()
{
    cout << "The " << monsterName << " attacks!" << endl;

    srand(time(NULL));
    int damage = 0;
    while (damage < minDamage)
        damage = rand() % maxDamage + 1;
    return damage;
}


