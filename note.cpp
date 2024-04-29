#include <iostream>
using namespace std;

class A {
public:
  void foo() {
    cout << "A" << endl;
  }
};

class B : public A {
public:
  void foo() {
    cout << "B" << endl;
  }
};

int main()
{
  /*A a;
  a.foo();
  B b;
  b.foo();
  b.A::foo();*/
  A *a = new B;
  a->foo();
}