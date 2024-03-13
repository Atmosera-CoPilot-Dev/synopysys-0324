/*
This file defines a class to represent a product named Product, include the following private fields:
- id: an integer representing the product's id
- name: a string representing the product's name
- price: a double representing the product's price

The class uses prototypes for the following public member functions:
- setName: a function that sets the product's name
- setPrice: a function that sets the product's price
- getId: a function that returns the product's id
- getName: a function that returns the product's name
- getPrice: a function that returns the product's price
- display: a function that displays the product's id, name, and price

There is a public constructor that takes the product's id, name, and price as arguments and sets the private fields accordingly.
*/

#pragma once

#include <string>

/**
 * @class Product
 * @brief Represents a product with an ID, name, and price.
 */
class Product {
    private:
        int id; /**< The ID of the product. */
        std::string name; /**< The name of the product. */
        double price; /**< The price of the product. */
    public:
        /**
         * @brief Constructs a new Product object.
         * @param id The ID of the product.
         * @param name The name of the product.
         * @param price The price of the product.
         */
        Product(int id, std::string name, double price);

        /**
         * @brief Sets the name of the product.
         * @param name The name of the product.
         */
        void setName(std::string name);

        /**
         * @brief Sets the price of the product.
         * @param price The price of the product.
         */
        void setPrice(double price);

        /**
         * @brief Gets the ID of the product.
         * @return The ID of the product.
         */
        int getId();

        /**
         * @brief Gets the name of the product.
         * @return The name of the product.
         */
        std::string getName();

        /**
         * @brief Gets the price of the product.
         * @return The price of the product.
         */
        double getPrice();

        /**
         * @brief Displays the details of the product.
         */
        void display();
};
