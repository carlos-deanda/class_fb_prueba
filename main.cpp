//
//  main.cpp
//  Project1
//
//  Created by Carlos on 15/05/25.

//COMMENTS:
//  Single line - //
/*
 MULTILINE
 COMMENTS
 */

//COMPILER
//S program that "Translates" source code into binary. In mac we use "clang".

//IDE (Integrated development environment
//Visual toolthat helps us develop, as Xcode.

//With INCLUDE we import a header into our current source code
// <> used for standard lirary headers or librariesi nstaled in your OS pack.
// "" for your own headers and files in your source tree.
#include <iostream>
#include "Animal.h"

int main() {

    
    // ::  - scope resolution operator
    // \n - line break
    std::cout << "Hello, World!\n";
    
    //creating an objett
    Animal animal1;
    Animal animal2(5,10);
    std::cout << animal1.add(2,3) <<std::endl;
    return 0;

}
