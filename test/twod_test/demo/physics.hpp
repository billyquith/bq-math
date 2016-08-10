
#pragma once
#include "demo.hpp"

class PhysicsDemo : public Demo
{
public:
    virtual ~PhysicsDemo() {}
    
    void enter() override;
    void processEvent(const sf::Event &evt) override;
    void draw(sf::RenderTarget &rt) override;
    void exit() override;
};
