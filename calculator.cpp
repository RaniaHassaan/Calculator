#include "calculator.h"

calculator::calculator() : result(0.0), mem(0.0)
{
}

void calculator::add()
{
	string a, b;
	cout << "\t\t Addition operation \n";
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;

	result = parseInput(a) + parseInput(b);
	cout << "Result = " << result << endl;

}

void calculator::subtract()
{
	string a, b;
	cout << "\t\t Subtraction operation \n";
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;

	result = parseInput(a) - parseInput(b);
	cout << "Result = " << result << endl;
}

void calculator::multiply()
{
	string a, b;
	cout << "\t\t Multiplication operation \n";
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;

	result = parseInput(a) * parseInput(b);
	cout << "Result = " << result << endl;
}

void calculator::division()
{
	string a, b;
	cout << "\t\t Division operation \n";
	cout << "enter the first number: ";
	cin >> a;
	cout << "enter the second number: ";
	cin >> b;

	result = parseInput(a) / parseInput(b);
	cout << "Result = " << result << endl;
}

void calculator::sqrt()
{
	string a;
	cout << "\t\t Quadrature operation \n";
	cout << "enter the number: ";
	cin >> a;
	double parsedA = parseInput(a);
	result = parsedA * parsedA;
	cout << "Result = " << result << endl;
}

void calculator::square()
{
	string a;
	cout << "\t\t Square root operation \n";
	cout << "enter the number: ";
	cin >> a;
	result = std::sqrt(parseInput(a));
	cout << "Result = " << result << endl;
}

void calculator::setmem()
{
	string a;
	cout << "enter a number: ";
	cin >> a;
	 mem = parseInput(a);
	cout << "the mem is " << mem << endl;
}

void calculator::printmem()
{
	cout << "the mem is " << mem << endl; 
}

double calculator::parseInput(string input)
{
	if (input == "result") 
		return result;
	 
	else if (input == "mem") 
		return mem;
	
	else 
		return std::stod(input);
	
}
void calculator::welcome()
{
	cout << "enter operation (+, -, /, *, sqrt, square, change, setmem, printmem) Or Exit \n";
}

void calculator::parseOperation(string input)
{
	if (input == "+" || input == "add" || input == "addition") {

		add();
	}
	else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus") {

	 subtract();
	}
	else if (input == "/" || input == "div" || input == "division" ) {

		division();
	}
	else if (input == "*" || input == "mul" || input == "multiply") {

		 multiply();
	}
	else if (input == "sqrt") {

		sqrt();
	}
	else if (input == "square") {

		square();
	}
	else if (input == "setmem") {

		setmem();
	}
	else if (input == "printmem") {

		printmem();
	}
}

 
