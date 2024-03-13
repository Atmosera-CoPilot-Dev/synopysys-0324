/*
This file uses the product class to create a product object and call the member functions to set and display the product's name and price.  

*/

#include <iostream>
#include "product.hpp"
#include <ctime>
#include <helpers.hpp>
#include <string>
#include <iomanip>
// include support for the vectors
#include <vector>

using std::cout;
using std::endl;

// create a function to demonstrate the product class
void demoProductClass()
{
    // create a product object
    Product product(1, "Widget", 19.99);
    // display the product's id, name, and price
    product.display();
    // set the product's name
    product.setName("Gadget");
    // set the product's price
    product.setPrice(29.99);
    // display the product's id, name, and price
    product.display();
}


Product getRandomProduct()
{
    // create a collection of products
    std::vector<Product> products = {
        Product(1, "Widget", 19.99),
        Product(2, "Gadget", 29.99),
        Product(3, "Doohickey", 39.99),
        Product(4, "Thingamajig", 49.99),
        Product(5, "Whatchamacallit", 59.99)
    };
    // return a random product
    return products[generateRandomNumber(0, products.size() - 1)];
}

int main() {


  return 0;
}