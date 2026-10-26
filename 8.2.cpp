
#include <iostream>
using namespace std;

class Base {
public:
    // Early binding (non-virtual function)
    void normal() {
        cout << "Base::normal (early binding)\n";
    }

    // Late binding (virtual function)
    virtual void special() {
        cout << "Base::special\n";
    }

    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void normal() {
        cout << "Derived::normal\n";
    }

    void special() override {
        cout << "Derived::special (late binding)\n";
    }
};

int main() {
    Derived d;
    Base* p = &d;
    p->normal();

    p->special();

    return 0;
}
