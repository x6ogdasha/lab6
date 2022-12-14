#include <iostream>
#include <cassert>
using namespace std;

double Plus(double x, double y){ return x+y;}
double Minus(double x, double y){ return x-y;}
double Umnoz(double x, double y){ return x*y;}
double Del(double x, double y){ return x/y;}

void TestPlus(){
    assert(Plus(2,3)==5);
    assert(Plus(-2,-3)==-5);
    assert(Plus(-2,0)==-2);
    assert(Plus(-2,2)==0);
    cout << "Сложение в порядке!\n";
}
void TestMinus(){
    assert(Minus(3,2)==1);
    assert(Minus(-2,-3)==1);
    assert(Minus(-2,0)==-2);
    assert(Minus(-2,2)==-4);
    cout << "Вычитание в порядке!\n";
}
void TestUmn(){
    assert(Umnoz(2,3)==6);
    assert(Umnoz(-2,-3)==6);
    assert(Umnoz(-2,0)==0);
    assert(Umnoz(-2,2)==-4);
    cout << "Умножение в порядке!\n";
}
void TestDel(){
    assert(Del(4,2)==2);
    assert(Del(-4,-2)==2);
    assert(Del(-2,2)==-1);
    cout << "Деление в порядке!\n";
}
int main() {
    TestPlus();
    TestMinus();
    TestUmn();
    TestDel();
    return 0;
}
