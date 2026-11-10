#include <iostream>
using namespace std;

class B;   // forward declaration (A needs to know B exists)

class A {
    int x;
public:
    A(int v) : x(v) {}
    friend int sum(const A& a, const B& b);
};

class B {
    int y;
public:
    B(int v) : y(v) {}
    friend int sum(const A& a, const B& b);
};

int sum(const A& a, const B& b) {
    return a.x + b.y;      // accesses private x of A and private y of B
}

int main() {
    A a(10);
    B b(20);
    cout << "Sum = " << sum(a, b) << endl;   // Sum = 30
}