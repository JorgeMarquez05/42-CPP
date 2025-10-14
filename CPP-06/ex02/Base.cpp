#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base *generate(void)
{
    // time_t time = std::time(NULL);
    // std::srand(time);

    // std::cout << "time: " << time << std::endl;

    // int idx = std::rand() % 6;

    // std::cout << "idx " << idx % 3 << std::endl;
    return (NULL);
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