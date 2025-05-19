// header files (.h)
//contains the definition of the class with NO implementation (unless its inline)
//

#pragma once

//anything that starts with a # is a prepocessor directive
//you can think of it as an instruction for the compiler

//pragma once - means only have a single copy of this file when running

// a couple of notes on naming conventions
//NO SPACES in names
// classes should be named using PascalCase
// variables and objects use camelCase
//constants and enums use UPPER_CASE

//in a class we define a CONTRACT
#include <iostream>

class Animal
{
    //inside a class we define members
    
    //we have 2 big categories
    // - attributes
    // - behaviors
    
    // this is also a scope
    
    //SUPER IMPORTANT
    //ACCESS MODIFIERS - keyworks that specify who can access a member
    // - private: member only accessible by th eclass itself. DEFAULT IN C++.
    // -protected: accessible by class itself and any in the subclass hierarchy.
    // - public: anyone can access the member.
    
    // variables - type name;
private:
    int age = 0;
    int weight = 0;
    
    
    
    // methods - returnType name(parameterList);
    //this is called a signature
    
public:
    //CONSTRUCTOR
    //- a method that is invoked whenc reating a new object of a class
    //- in c++ it MUST be named the same as the class
    //- it has no return type
    //We already have an empty default constructor implicitily
    
    //default constructor - constructor with no parameters
    Animal();
    
    //I can have as many constructors as I need.
    Animal(int age, int weight);
    
    void eat();
    int add(int firstValue, int secondValue);
    
};
