#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct item{
public:
    int itemid;
    string itemName;
    int maxDamage;
    int minDamage;
    string type;
    item *link;

};

class itemList{

private:
    item *firstPtr;

public:
    itemList();
    int damage(item /*weapon*/);
    int pickUpreturn();
    item setEquipped();
    //~item();
};

#endif // ITEMS_H
