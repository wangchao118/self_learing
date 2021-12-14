#include <iostream>
#include <string>

class Lovers
{
public:
    Lovers(std::string theName);
    void kiss(Lovers *lover);
    void ask(Lovers *lover, std::string something);

protected:
    std::string name;

    friend class Others;
};

class Boyfriend: public Lovers
{
public:
    Boyfriend(std::string theName);
};

class Girlfriend: public Lovers
{
public:
    Girlfriend(std::string theName);
};

class Others
{
public:
    Others(std::string theName);
    void kiss(Lovers *lover);
protected:
    std::string name;
};

Lovers::Lovers(std::string theName)
{
    name = theName;
}

void Lovers::ask(Lovers *lover, std::string something)
{
    std::cout<<"Baby"<<lover->name<<"help me"<<something<<std::endl;
}

Boyfriend::Boyfriend(std::string theName):Lovers(theName)
{
}

Girlfriend::Girlfriend(std::string theName):Lovers(theName)
{
}

Others::Others(std::string theName)
{
    name = theName;
}

void Others::kiss(Lovers *lover)
{
    std::cout<<name<<"kiss"<<lover->name<<std::endl;
}

int main()
{
    Boyfriend boyfriend("gentalmen A");
    Girlfriend girlfriend("Lady B");

    Others others("anybody A");

    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend,"wash clothes");
    std::cout<<"\ndong dong dong dong ! anybody A is arrived!";
    others.kiss(&girlfriend);

    return 0;
}
