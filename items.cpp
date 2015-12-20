#include "items.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>

/*
class item{
private:
    string itemName;
    int maxDamage;
    int minDamage;
    // string type
public:
    item();
    int damage();
    //~item();
};
 */

using namespace std;
item::item()
{
    itemName = "Blade of testing";
    maxDamage = 10;
    minDamage = 1;


}

int item::damage()
{
    srand(time(NULL));
    int damage = 0;
    while (damage < minDamage)
        damage = rand() % maxDamage + 1;
    return damage;
}
