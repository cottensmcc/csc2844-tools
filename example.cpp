#include <iostream>
#include "example.h"

using namespace std;

void Example::print() const
{
    cout << "num = " << num;
}

int Example::getNum() const
{
    return num;
}

void Example::setNum(int n)
{
    num = n;
}

Example::Example(int n)
{
    setNum(n);
}

Example::Example()
{
    num = 0;
}

