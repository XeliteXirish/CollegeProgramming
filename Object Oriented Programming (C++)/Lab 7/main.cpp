#include "Simple_window.h"
#include "Graph.h"

using namespace Graph_lib;

int main()
{
    Simple_window win(Point(100, 100),600,400,"My Window");

    // PolyGon and rect
    Graph_lib::Rectangle rect(Point(100, 50), 250, 150);
    rect.set_color(Color::red);
    win.attach(rect);

    Graph_lib::Polygon poly;

    poly.add(Point(200,150));
    poly.add(Point(450,150));
    poly.add(Point(450,300));
    poly.add(Point(200,300));

    poly.set_color(Color::white);
    win.attach(poly);

    win.wait_for_button();
    win.detach(poly);

    Text name(Point(150, 100), "Hello World!");
    name.set_font(Font::times_bold);
    name.set_font_size(20);
    name.set_color(Color::green);
    win.attach(name);
    win.wait_for_button();

    // Chess board
    win.detach(name);
    win.detach(rect);

    int x, y;
    for (x = 1; x <= 8; x++) {
        for (y = 1; y <= 8; y++) {
            Graph_lib::Rectangle rect(Point(100, 50), 250, 150);
            rect.set_color(Color::red);
            win.attach(rect);
            //if ((x % 2 != 0) && (y % 2 == 0)) rect.set_color(Color:: white);
            //else rect.set_color(Color::black);
        }
    }

    win.wait_for_button();
}
