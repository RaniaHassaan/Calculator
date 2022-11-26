#pragma once
#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include<string>
#include<cmath>
#include "calculator.h"
class scientific :
    public calculator
{
public:

    scientific();
    virtual ~scientific() = default; //Virtual destructor to prevent delete errors
    virtual void welcome() override;
    virtual void parseOperation(string input) override;

    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();

protected:
    double result, mem;
};

#endif SCIENTIFIC_H