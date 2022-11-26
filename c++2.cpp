// c++2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "calculator.h"
#include "scientific.h" 

using namespace std;
int main()
{
    calculator calc;
    scientific sci;


    // Assign calculator pointer to the simple calc object
    // This will be used later for polymorphism
    calculator* calcPtr = &calc;

    bool sciActive = false;

    cout << "Welcome to my Calculator App\n\n"
        << "This calculator has 2 modes, normal and scientific.\n"
        << "You can change it using the 'change' keyword.\n\n"
        << "This app has 2 other special keywords, result and mem.\n"
        << "result stores the result of the previous calculation.\n"
        << "mem allows you to store and access a number.\n"
        << "Both can be used instead of numbers during calculations.\n"
        << "They are both local to the mode you are using.\n";

    cout << setprecision(15);

    calcPtr->welcome();

    string input = " ";

    while (cin >> input && input != "exit") {
         

            if (sciActive) {

                calcPtr = &calc;
                sciActive = false;
                cout << "Normal calculator activated \n";
            }
            else {

                calcPtr = &sci;
                sciActive = true;
                cout << "Scientific calculator activated \n";
            }

             // Call virtual functions from base class pointer to get polymorphic
            // Executes function based on type of object
            calcPtr->parseOperation(input);
            calcPtr->welcome();
        
    }

    return 0;
     
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
