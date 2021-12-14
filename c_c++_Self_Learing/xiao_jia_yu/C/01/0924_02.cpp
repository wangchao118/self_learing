#include <iostream>
#include <string>

class Animal
{
public:
    std::string mouth;

    void eat();
    void sleep();
    void drool();
};

class Pig: public Animal
{
public:
    void climb();
};

class Turtle: public Animal
{
public:
    void swim();
};

void Animal::eat()
{
    std::cout<<"I'm eating!"<<std::endl;
}

void Animal::sleep()
{
    std::cout<<"I'm sleeping!"<<std::endl;
}