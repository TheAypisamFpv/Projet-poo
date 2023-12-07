#pragma once

#include "User.h"



class Stock : public User {

private:

    int id_stock;

    // Propriétés spécifiques à Stock



public:

    Stock();

    ~Stock() override;

    std::string get_info() const override;

    float calculate(int parameter) const;

    int identify(int parameter) const;

    int simulate(int parameter) const;

};

