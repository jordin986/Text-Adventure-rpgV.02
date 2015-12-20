#ifndef ITEMS_H
#define ITEMS_H



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cassert>
#include <stdlib.h>
#include <time.h>

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
#endif // ITEMS_H
