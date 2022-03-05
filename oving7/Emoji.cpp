#include "Emoji.h"

Face::Face(Point p, int r): centre{p}, radius{r} {}

void Face::draw(AnimationWindow& win){
    win.draw_circle(centre, radius, Color::yellow);
}


EmptyFace::EmptyFace(Point c, int r, Point centre1, Point centre2, int r_2) : Face{c, r}, centre1{centre1}, centre2{centre2}, r_2{r_2} {}


void EmptyFace::draw(AnimationWindow& win){
    Face::draw(win);
    win.draw_circle(centre1, r_2, Color::black);
    win.draw_circle(centre2, r_2, Color::black);
}

SurprisedFace::SurprisedFace(Point c, int r, Point centre1, Point centre2, int r_2, Point centre, int width, int height, int start_degree, int end_degree) : 
    EmptyFace{c,r,centre1,centre2, r_2}, centre{centre}, width{width}, height{height}, start_degree{start_degree}, end_degree{end_degree} {}

void SurprisedFace::draw(AnimationWindow& win){
    EmptyFace::draw(win);
    win.draw_arc(centre, width, height, start_degree, end_degree, Color::black);

}

BoredFace::BoredFace(Point c, int r, Point centre1, Point centre2, int r_2, Point start, Point end) :
    EmptyFace{c,r,centre1,centre2, r_2}, start{start}, end{end} {}


void BoredFace::draw(AnimationWindow& win){
    EmptyFace::draw(win);
    win.draw_line(start, end, Color::black);
}

SmilingFace::SmilingFace(Point c, int r, Point centre1, Point centre2, int r_2, Point centre, int width, int height, int start_degree, int end_degree) : 
    EmptyFace{c,r,centre1,centre2, r_2}, centre{centre}, width{width}, height{height}, start_degree{start_degree}, end_degree{end_degree} {}

void SmilingFace::draw(AnimationWindow& win){
    EmptyFace::draw(win);
    win.draw_arc(centre, width, height, start_degree, end_degree, Color::black);

}


WinkingFace::WinkingFace(Point c, int r, Point centre1, Point start, Point end, int r_2, Point centre, int width, int height, int start_degree, int end_degree) : 
    Face{c,r}, centre1{centre1}, start{start}, end{end}, r_2{r_2}, centre{centre}, width{width}, height{height}, start_degree{start_degree}, end_degree{end_degree} {}

void WinkingFace::draw(AnimationWindow& win){
    Face::draw(win);
    win.draw_circle(centre1, r_2, Color::black);
    win.draw_line(start, end, Color::black);
    win.draw_arc(centre, width, height, start_degree, end_degree, Color::black);

}