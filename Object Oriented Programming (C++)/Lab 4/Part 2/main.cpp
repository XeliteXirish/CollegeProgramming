#include <iostream>

using namespace std;

void swap(int, int);
void swap_r(int &, int &);
void swap_cr(const int &, const int &);

/**
1.  Yes it compiled, the code is valid.
    After first block: x = 7, y = 9
    After second block: cx = 7, cy = 9
    After third block dx = 7.7, dy = 8.2
**/

int main()
{
    int x = 7, y = 9 ;
    swap_r(x, y);
    //swap_r(7, 9);
    cout << x << " - " << y << endl;

    const int cx = 7, cy = 9 ;
    swap(cx, cy) ;
    swap(7.7, 9.3) ;
    cout << cx << " - " << cy << endl;

    double dx = 7.7, dy = 8.2 ;
    swap( dx, dy );
    swap( dx, dy ) ;
    cout << dx << " - " << dy << endl;

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a ;
    a = b;
    b = temp;
}

void swap_r(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_cr(const int &a, const int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
