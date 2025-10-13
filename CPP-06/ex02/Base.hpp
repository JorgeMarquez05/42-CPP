#pragma once

class Base
{
private:
public:
    Base();
    virtual ~Base();
};



Base *generate(void);
void identify(Base *p);
void identify(Base &p);