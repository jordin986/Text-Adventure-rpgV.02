#include "player.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>


/*
class player{
private:
    string playerName;
    int maxHp;
    int curHp;
    int level;
    int xp;
    int strength;
    int intelligence;
public:
    player();
    void showStats();
    string showName() const { return playerName;}
    void gainXP(int xp gained);
    void takeDamageReturnhp(int damage taken);
    int attack(int weapon dmg);
    //~player();
};

*/

player()
{
    cin >> playerName;
    srand(time(NULL));
    level = 1;
    xp = 0;
    strength = rand() % 10 + 1;
    intelligence = rand() % 10 + 1;
    maxHp = rand() % 10 + 1 + strength
}

void player::showStats()
{
    cout << "Name: " << playerName;
    cout << "Max HP: " << maxHp << endl;
    cout << "Current HP: " << curHp << endl;
    cout << "Level: " << level << endl;
    cout << "Current XP " << xp << endl;
    cout << "Strength: " << strength << endl;
    cout << "Intelligence: " << intelligence << endl;
}

void player::gainXP(exp)
{
    xp += exp;
}

void player::takeDamage(damage, source)
{
    cout << "You have taken " << damage << " damage from a" << source;
    curHp = curHp - damage;


}

int player::attack(damage)
{
    damage += strength;

    return damage;

}
