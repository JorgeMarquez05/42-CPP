#include "Base.hpp"
#include <unistd.h>

Base::Base()
{
}

Base::~Base()
{
}

Base *generate(void)
{
    static bool seeded = false;

    if (!seeded)
    {
        time_t time = std::time(NULL);
        std::srand(time);
        seeded = true;
    }

    int idx = std::rand() % 3;

    switch (idx)
    {
    case a:
        return (new A);
    case b:
        return (new B);
    case c:
        return (new C);

    default:
        return (NULL);
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "it's A Class" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "it's B Class" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "it's C Class" << std::endl;
    else
        std::cout << "Unknown Class" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "it's A Class" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "it's B Class" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "it's C Class" << std::endl;
        return;
    }
    catch (std::exception &e)
    {
    }
    std::cout << "Unknown Class" << std::endl;
}