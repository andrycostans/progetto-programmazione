//
// Created by andry on 26/05/2020.
//

#ifndef PROGETTO_TABELLA_H
#define PROGETTO_TABELLA_H
#include <vector>
using namespace std;

template<typename T>
class Tabella {
private:
    vector<Record> recs;
    friend class Record;
    friend class Colonna;
};


#endif //PROGETTO_TABELLA_H
