#ifndef PLAYER_H
#define PLAYER_H


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>


using namespace std;

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
    void gainXP(int /*xp gained*/);
    void takeDamage(int /*damage taken*/, string /*source*/);
    int returnHp(){return curHp;}
    int attack(int /*weapon dmg*/);
    //~player();
};
#endif // PLAYER_H
