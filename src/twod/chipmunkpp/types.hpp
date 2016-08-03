#pragma once

#include <chipmunk/chipmunk.h>

#ifndef _MSC_VER
#pragma GCC visibility push(default)
#endif

namespace twod {
namespace cp {
    
    typedef cpFloat Float;
    typedef cpCollisionType CollisionType;
    typedef cpDataPointer DataPointer;

    class Layers
    {
    public:

        Layers(); // no layers
        Layers(unsigned int layerNr); // one layer
        Layers operator ~ () const;
        Layers operator | (Layers rhs) const;
        explicit operator cpBitmask() const;

    private:

        cpBitmask l;
    };

    static const Layers ALL_LAYERS(~(Layers()));

    class Group
    {
    public:

        Group(cpGroup);
        explicit operator cpGroup() const;

    private:

        cpGroup g;
    };

    static const Group NO_GROUP(CP_NO_GROUP);
    
}}

#ifndef _MSC_VER
#pragma GCC visibility pop
#endif