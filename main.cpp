#include <iostream>
#include "example.h"

using namespace std;

int main()
{
    //Instantiate example object using default constructor
    Example e1;

    // Instantiate example object using parameterized constructor
    Example e2(10);

    // Print the default value of e1's num variable
    cout << "Default value of e1's num variable: ";
    e1.print();
    cout << endl << endl;

    // Set e1's num variable
    e1.setNum(5);

     // Print the current value of e1's num variable
    cout << "Value of e1 after setting e1's num variable with setNum: ";
    e1.print();
    cout << endl << endl;

    // Print the value of e1's num variable using getter
    cout << "Value of e1's num variable using the getNum function: ";
    cout << "num = " << e1.getNum() << endl;
    cout << endl << endl;

    // Print the value of e2's num variable
    cout << "Value of e2: ";
    e2.print();
    cout << endl << endl;

    return 0;
}