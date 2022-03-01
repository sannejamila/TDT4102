#pragma once
#include "AnimationWindow.h"
#include "std_lib_facilities.h"

// Abstrakt klasse. Arvende konkrete klasser må implementere funksjonen draw()
// som tegner former i vinduet de skal bli vist i.
class Emoji
{
public:
    virtual void draw(AnimationWindow&) = 0;
    virtual ~Emoji(){}; //destruktør
};


class Face : public Emoji{
    protected:
        int radius;
        Point centre;
    public:
        Face(Point c, int r);
        virtual void draw(AnimationWindow& win) override;
};

class EmptyFace : public Face{
    protected:
        Point p;
        int r;
    public:
        EmptyFace(Point c, int r, int r_eye, Point c_1, Point c_2) : Face{c, r} {}
        
};