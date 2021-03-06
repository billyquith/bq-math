#pragma once

#include "demo.hpp"

class IntersectDemo : public InteractiveDemo
{
public:
    typedef InteractiveDemo Parent;
    
    IntersectDemo();
    virtual ~IntersectDemo();
    
    void enter() override;
    void processEvent(const sf::Event &evt) override;
    void draw(sf::RenderTarget &rt) override;
    void exit() override;
    
private:

    DemoPoints dpts_;
};
