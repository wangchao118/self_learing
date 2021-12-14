#pragma once
#include <string>
#include "Gun.h"

class Solider
{
public:
    Solider(std::string name);
    ~Solider();
    void addBulletToGun(int num);
    void addGun(Gun *ptr_gun);
    bool fire();

private:
    std::string _name;
    Gun *_ptr_gun;
};