#include <cstdio>
class A{
public:
    A(){
        f();
    }
    virtual void f(){
        printf("A::f\n");
    }
};
 
class B:public A{
public:
    virtual void f(){
        printf("B::f\n");
    }
};
 
int main(){
    B b;
    return 0;
}