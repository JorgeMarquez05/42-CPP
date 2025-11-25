#include "Base.hpp"

class D : public Base
{
};

int main()
{

    // std::cout << "\033[1;31mTrying to Identify known Classes \033[00m" << std::endl;

    // Base *a = new A;
    // Base *b = new B;
    // Base *c = new C;
    // Base *d = new D;

    // std::cout << "\n\033[1;31mIdentify by pointer \033[00m" << std::endl;

    // identify(a);
    // identify(b);
    // identify(c);
    // identify(d);

    // std::cout << "\n\033[1;31mIdentify by reference \033[00m" << std::endl;

    // identify(*a);
    // identify(*b);
    // identify(*c);
    // identify(*d);

    Base *p = generate();
    Base *p1 = generate();
    Base *p2 = generate();

    identify(p);
    identify(p1);
    identify(p2);

    // identify(*p);
    // identify(*p1);
    // identify(*p2);
    delete p;
    delete p1;
    delete p2;
}