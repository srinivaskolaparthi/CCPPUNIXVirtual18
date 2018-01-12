#include <iostream>
using namespace std;

// forward declaration
class B;
class A {
    private:
      int numA;
      void display()
      {
          cout<<"A friend";
      }
      
    public:
      A(): numA(12) { }
      
      friend int add(A, B);
};

class B {
    private:
       int numB;
    public:
       B(): numB(1) { }
       friend int add(A , B);
};

int add(A objectA, B objectB)
{
   objectA.display();
   return (objectA.numA + objectB.numB);
}

int main()
{
    A objectA;
    B objectB;
    cout<<"Sum: "<< add(objectA, objectB);
    return 0;
}
