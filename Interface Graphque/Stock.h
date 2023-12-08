#pragma once

#include "User.h"
#include <string>
using namespace std;



class Stock : public User {

private:

    int id_stock;

    // Propri�t�s sp�cifiques � Stock



public:

    Stock();

    ~Stock() override;



    string calculate(int request) const;

    string identify(string request) const;

    string simulate(string request) const;

};

