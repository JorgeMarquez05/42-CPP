#pragma once
// #include <cstdint>
#include "stdint.h"
#include "Data.hpp"


class Serializer
{
private:
    /* data */
public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
