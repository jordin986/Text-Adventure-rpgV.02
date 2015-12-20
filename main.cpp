
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
string playermove;
monster * test = new monster;
player * play = new player;
int playhp = play->returnHp();
item * wep = new item;
int main()
{


    cout << "You see a " << test->showName() <<"! What do you do?" << endl;
   do{
        cin >> playermove;
        playhp = play->returnHp();

        if (playermove == "attack")
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

        monsterTurn(test, play);

    }   while (playhp!=0);


    return 0;

}


void monsterTurn(monster* test, player* play)
{

    int dmg = test->attack();
    string source = test->showName();
    play->takeDamage(dmg, source);
}
