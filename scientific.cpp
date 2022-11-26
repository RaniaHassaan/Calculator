#include "scientific.h"

scientific::scientific()  : result(0.0), mem(0.0)
{
}

void scientific::welcome()
{
    cout << "\n\nEnter one of:\n"
        << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n"
        << "or exit\n";
}

void scientific::parseOperation(string input)
{
    calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        cos();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "pow")
    {
        pow();
    }
}

void scientific::sin()
{
     string a;
     cout << "Enter a number: ";
     cin >> a;
     result = std::sin(parseInput(a));
     cout << "The result is " << result;
}

void scientific::cos()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::cos(parseInput(a));
    cout << "The result is " << result;
}

void scientific::tan()
{
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::tan(parseInput(a));
    cout << "The result is " << result;
}

void scientific::ln()
{
     string a;
     cout << "Enter a number: ";
     cin >> a;
     result = std::log(parseInput(a));
     cout << "The result is " << result;
}

void scientific::log()
{
     string a, b;
     cout << "Enter the base: ";
     cin >> a;
     cout << "Enter a number: ";
     cin >> b;
     result = std::log(parseInput(b)) / std::log(parseInput(a));
     cout << "The result is " << result;
}

void scientific::abs()
{
     string a;
     cout << "Enter a number: ";
     cin >> a;
     result = std::abs(parseInput(a));
     cout << "The result is " << result;
}

void scientific::pow()
{
     string a, b;
     cout << "Enter the base: ";
     cin >> a;
     cout << "Enter the exponent: ";
     cin >> b;
     result = std::pow(parseInput(a), parseInput(b));
     cout << "The result is " << result;
}
