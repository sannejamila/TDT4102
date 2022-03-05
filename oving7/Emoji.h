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
        Point centre1;
        Point centre2;
        int r_2;
    public:
        EmptyFace(Point c, int r, Point centre1, Point centre2, int r_2);
        virtual void draw(AnimationWindow& win) override;
        
};

class SurprisedFace : public EmptyFace{
    protected:
        Point centre;
        int width;
        int height;
        int start_degree;
        int end_degree;
    public:
        SurprisedFace(Point c, int r, Point centre1, Point centre2, int r_2, Point centre, int width, int height, int start_degree, int end_degree);
        virtual void draw(AnimationWindow& win) override;
};

class BoredFace : public EmptyFace{
    protected:
        Point start;
        Point end;
    public:
        BoredFace(Point c, int r, Point centre1, Point centre2, int r_2, Point start, Point end);
        virtual void draw(AnimationWindow& win) override;

};

class SmilingFace : public EmptyFace{
      protected:
        Point centre;
        int width;
        int height;
        int start_degree;
        int end_degree;
    public:
        SmilingFace(Point c, int r, Point centre1, Point centre2, int r_2, Point centre, int width, int height, int start_degree, int end_degree);
        virtual void draw(AnimationWindow& win) override;

};

class WinkingFace : public Face{
    protected:
        Point centre1;
        Point start;
        Point end;
        int r_2;
        Point centre;
        int width;
        int height;
        int start_degree;
        int end_degree;
    public:
        WinkingFace(Point c, int r, Point centre1, Point start, Point end, int r_2, Point centre, int width, int height, int start_degree, int end_degree);
        virtual void draw(AnimationWindow& win) override;

};