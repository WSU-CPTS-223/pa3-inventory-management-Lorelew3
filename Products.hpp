#pragma once
#include <string>
#include <iostream>

class Products
{
    private:
    std::string id;
    std::string name;
    std::string manufacturer;
    std::string category;

    public:
    // constructors
    Products() {}
    Products(std::string ids, std::string names, std::string man, std::string cat) : id(ids), 
    name(names), manufacturer(man), category(cat) {}
    
    // getters
    std::string getID() const;
    std::string getName() const;
    std::string getManufacturer() const;
    std::string getCategory() const;

    // print function
    void print() const;
};

// getter for ID
std::string Products::getID() const
{
    return id;
}

// getter for name
std::string Products::getName() const
{
    return name;
}

// getter for Manufacturer
std::string Products::getManufacturer() const
{
    return manufacturer;
}

// getter for category
std::string Products::getCategory() const
{
    return category;
}

// print function
void Products::print() const
{
    std::cout << "ID: " << id << std::endl;

}