#include <iostream>
#include <string>

class Animal
{
public:
    Animal(std::string theName);
    void eat();
    void sleep();
    void drool();

protected:
    std::string name;
};

class Pig: public Animal
{
public:
    Pig(std::string theName);
    void climb();
    void eat();           //new
};

class Turtle: public Animal
{
public:
    Turtle(std::string theName);
    void swim();
    void eat();           //new
};

Animal::Animal(std::string theName)
{
    name = theName;
}

void Animal::eat()
{
    std::cout<<"I'm eating!"<<std::endl;
}

void Animal::sleep()
{
    std::cout<<"I'm sleeping!Don't disturb me!\n"<<std::endl;
}

void Animal::drool()
{
    std::cout<<"I'm drooling"<<std::endl;
}

Pig::Pig(std::string theName):Animal(theName)
{
}

void Pig::climb()
{
    std::cout<<"I'm climbing\n"<<std::endl;
}

void Pig::eat()
{
    Animal::eat();
    std::cout<<name<<"is eating fish!\n\n";
}

void Turtle::swim()
{
    std::cout<<"I am a fishC, I wanna swim!"<<std::endl;
}

void Turtle::eat()
{
    Animal::eat();
    std::cout<<name<<"is eating meat!\n\n;"<<std::endl;  //new
}

int main()
{
    Pig pig("small pig");
    Turtle turtle("small fish");

    pig.eat();
    turtle.eat();
    pig.climb();
    turtle.swim();

    return 0;
}