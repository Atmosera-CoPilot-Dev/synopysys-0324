// include the header file
#include "product.hpp"

// this is the constructor with explicit initialization
Product::Product(int id, std::string name, double price) : id(id), name(name), price(price) {}

// Implement the setName function
void Product::setName(std::string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}

int Product::getId()
{
    return id;
}

double Product::getPrice()
{
    return price;
}

void Product::display()
{
}
