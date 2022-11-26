#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>
#include<string>
#include<cmath>
#include<array>
using namespace std;
class calculator
{

protected:

	double result;
	double mem;

public:

    calculator();
	virtual ~calculator() = default;     //virtual destructor to prevent delete errors
	void add();
	void subtract();
	void multiply();
	void division();
	void sqrt();
	void square();
	void setmem();
	void printmem();


	// Parse input subs in number value when strings result or mem are entered
	double parseInput(string);

	// parse input and decide which member func to call
	virtual void parseOperation(string);

	virtual void welcome();


};
#endif CALCULATOR_H
