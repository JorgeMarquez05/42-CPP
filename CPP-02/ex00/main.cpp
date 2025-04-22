#include "Fixed.hpp"

int	main(void)
{
    Fixed a(42);

    Fixed b;

    b =a;

    b.getRawBits();

    return(0);
}