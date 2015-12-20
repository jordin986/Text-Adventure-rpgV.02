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
itemList::itemList()
{
    item *firstPtr = NULL;
    item *walker = firstPtr;
    item *stalker = NULL;

    ifstream fin("items.jor");

    while (!fin.eof())
    {
        item *builder = new item;
        assert(builder);

        fin >> builder->itemid;
        fin >> builder->itemName;
        fin >> builder->maxDamage;
        fin >> builder->minDamage;
        fin >> builder->type;
        builder->link = walker;
        if (stalker == NULL)
        {
            firstPtr = builder;
        }
        else
        {
            stalker->link = builder;
        }


    }


}

int itemList::damage const(class *weapon)
{
    srand(time(NULL));
    int damage = 0;
    while (damage < weapon.minDamage)
        damage = rand() % weapon.maxDamage + 1;
    return damage;
}

int itemList::pickUpreturn()
{
    return itemID.itemid;
}

item itemList::setEquipped()
{
    item *walker = new item;
    while (walker != NULL)
    {
        if (walker->itemid != 0)
            walker = walker->link;
        else
            break;
    }
    return walker;
}

