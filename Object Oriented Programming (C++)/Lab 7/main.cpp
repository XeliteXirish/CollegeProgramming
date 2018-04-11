#include "Simple_window.h"
#include "Graph.h"

void drawRect(Simple_window);
void drawPoly(Simple_window);
void drawName(Simple_window);

int main()
{
    using namespace Graph_lib;
    Simple_window win(Point(100, 100),600,400,"My Window");

    drawPoly(win);

    win.wait_for_button();
}
void drawRect(Simple_window win) {
    Graph_lib::Rectangle rect(Point(100, 50), 250, 150);
    rect.set_color(Color::red);
    win.attach(rect);
}

void drawPoly(Simple_window win) {
    Graph_lib::Polygon poly;

    poly.add(Point(200,150));
    poly.add(Point(450,150));
    poly.add(Point(450,300));
    poly.add(Point(200,300));

    poly.set_color(Color::white);
    win.attach(poly);
}

void drawName(Simple_window win) {

    Text name(Point(300, 150), "SON");
    name.set_font(Font::times_bold);
    name.set_font_size(20);
    name.set_color(Color::green);
    win.attach(name);
}
