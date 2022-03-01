#include "Emoji.h"

Face::Face(Point p, int r): centre{p}, radius{r} {}

void Face::draw(AnimationWindow& win){
    win.draw_circle(centre, radius, Color::yellow);
}

EmptyFace::EmptyFace(Point c, int r, int r_eye, Point c_1, Point c_2) : Face(p,r){
    
}