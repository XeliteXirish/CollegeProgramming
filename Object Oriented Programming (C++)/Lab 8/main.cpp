/**
	Created by Shaun O'Neill (B00098451)
	Define two classes Smiley and Frowny, which are both derived from class Circle and have two eyes and a mouth.
**/

#include <iostream>
#include "Graph.h"
#include "Simple_window.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

class Smiley : public Circle
{
public:
	using Circle::Circle; // use Circle's constructors
	void draw_lines() const;
};

class Frowny : public Circle
{
public:
	using Circle::Circle; // use Circle's constructors
	void draw_lines() const;
};

int main()
{
	const int win_width = 600, win_height = 400;
	const Point t1(100, 100);
	Simple_window win( t1, win_width, win_height, "Smiley and Frowny" );

	const int radius = 100;
	Smiley smiley( Point( win_width / 2 - 150, win_height / 2 ), radius );
	Frowny frowny( Point( win_width / 2 + 150, win_height / 2 ), radius );

	smiley.set_color(Color::black);
	frowny.set_color(Color::black);

	win.attach(smiley);
	win.attach(frowny);
	win.wait_for_button();
}

void Smiley::draw_lines() const
{
	// Draw the eyes
	fl_arc(point(0).x + radius() / 2, point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);
	fl_arc(point(0).x + radius() * 1.3, point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	// Draw the mouth
	fl_arc(point(0).x + radius() / 1.3, point(0).y + radius(), radius() / 2, radius() / 2, 240, 300);

	// Draw face
	Circle::draw_lines();
}

void Frowny::draw_lines() const
{
	// the eyes
	fl_arc(point(0).x + radius() / 2,
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	fl_arc(point(0).x + radius() * 1.3,
		point(0).y + (radius() / 2) + (radius() / 6.3), radius() / 5, radius() / 5, 0, 360);

	// Draw the mouth
	fl_arc(point(0).x + radius() / 1.3,
		point(0).y + radius() * 1.5, radius() / 2, radius() / 2, 45, 135);

	// Draw face
	Circle::draw_lines();
}
