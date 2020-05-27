//
// Created by andry on 26/05/2020.
//

#ifndef PROGETTO_COLONNA_H
#define PROGETTO_COLONNA_H
#include "Tabella.h"
#include <algorithm>
using namespace std;

template<typename T>
class Colonna {
private:
    vector<T> col;
    friend class Tabella;
};


#endif //PROGETTO_COLONNA_H
