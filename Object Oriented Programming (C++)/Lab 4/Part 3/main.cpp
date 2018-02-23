#include <iostream>

/**
    Namespaces in file but wouldnt make a difference if it was in a header
**/
namespace X {
    int var;
    void print() {
        std::cout << var << std::endl;
    }
}

namespace Y {
    int var;
    void print() {
        std::cout << var << std::endl;
    }
}

namespace Z {
    int var;
    void print() {
        std::cout << var << std::endl;
    }
}

int main()
{
    int var;

    X::var = 7;
    X::print();     // print X's var

    using namespace Y;

    Y::var = 9;
    Y::print();        // print Y's var
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    // print Z's var
    }
    print();        // print Y's var
    X::print();     // print X's var

    return 0;
}
