#include "AnimationWindow.h"
#include "Emoji.h"

// Definer størrelse på vindu og emoji
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

int main()
{

	const Point tl{100, 100};
	const string win_label{"Emoji factory"};
	AnimationWindow win{tl.x, tl.y, xmax, ymax, win_label};


	Point p = {150,150};
	int r = 50;
	Point c1 = {170,130};
	Point c2 = {130,130};
	int r_2 = 10;

	Point centre = {150,150};


	SmilingFace SmilingFace(p,r, c1,c2,r_2, centre, 20, 30, -180, 360);
	SmilingFace.draw(win);

	Point p2 = {300,150};
	int r2 = 50;
	Point c12 = {320,130};
	Point c22 = {280,130};
	int r_22 = 10;

	Point centre2 = {300,160};
    int width2 = 50;
    int height2 = 10;
    int start_degree2 = 0;
    int end_degree2 = 3.14/2;


	SurprisedFace SurprisedFace(p2,r2,c12,c22,r_22, centre2, width2, height2, start_degree2, end_degree2);
	SurprisedFace.draw(win);

	BoredFace BoredFace({500,150}, r2, {520,130}, {480,130}, r_22, {470, 160}, {530,160});
	BoredFace.draw(win);

	WinkingFace WinkingFace({700, 150}, r2, {720, 130}, {690, 130}, {670, 130}, r_22, {700,150}, 20, 30, -180, 360);
	WinkingFace.draw(win);
	
	win.wait_for_close();
}

