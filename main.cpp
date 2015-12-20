
#include "monsters.h"
#include "player.h"
#include "items.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>


void monstersTurn();
using namespace std;
int main()
{

    string playermove;
    monster * test = new monster;
    test->monster();
    player * play = new player;
    play->player();
    item * wep = new item;
    wep->item();
    cout << "You see a " << test->showName() <<"! What do you do?" << endl;
    while (test->returnHp() > 0 && play->returnHp() > 0)
    {
        cin >> playermove;
        if (playermove == attack)
        {
            int damage = wep->damage();
            int pDamage = play->attack(damage);
            test->takeDamage(pDamage);
            cout << "The monster has " << test->returnHp() << endl;

         }
        else
        {
            cout << "Please attack" << endl;
        }

        monsterTurn();
    }
    return 1;

}


void monstersTurn()
{
    int dmg = test->attack();
    int source = test->showName;
    play->takeDamage(dmg, source);
}
