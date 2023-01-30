#pragma once
#include "product.h"

class Invoice
{
private:
    int invoiceNumber;
    double invoiceTotal;
public:
    Invoice(int invoiceNumber);
    ~Invoice();
    void add(int quantity, Product product);
    void print() const;
};