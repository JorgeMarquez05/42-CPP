#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>

class Base
{
private:
public:
    Base();
    virtual ~Base();
};

class A : public Base
{
};
class B : public Base
{
};

class C : public Base
{
};

enum
{
    a,
    b,
    c,
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);