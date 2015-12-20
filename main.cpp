
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

using namespace std;
void monsterTurn(monster* , player*);
int main()
{
    string playermove;
    monster * test = new monster;
    player * play = new player;
    int playhp = play->returnHp();
    itemList * wep = new itemList;

    int killctr = 0;

    item *equipped;
    *equipped = wep->setEquipped();

    cout << "You see a " << test->showName() <<"! What do you do?" << endl;
   do{
        cin >> playermove;
        playhp = play->returnHp();

        if (playermove == "attack")
        {
            int damage = wep->damage(*equipped);
            int pDamage = play->attack(damage);
            test->takeDamage(pDamage);

         }
        else
        {
            cout << "Please attack" << endl;
        }

        if (test->returnHp() <= 0)
        {
            cout << "goblin dead!" << endl;
            killctr ++;
            test = new monster;
            cout << "Another steps up! What do you do? " << endl;
        }
        else
            monsterTurn(test, play);


    }   while (playhp >= 0 && playermove != "quit");

    cout << "Congrats ! you managed to kill " << killctr << " goblins!!" << endl;

    return 0;

}


void monsterTurn(monster* test, player* play)
{

    int dmg = test->attack();
    string source = test->showName();
    play->takeDamage(dmg, source);
}
