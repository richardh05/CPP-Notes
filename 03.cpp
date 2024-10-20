// Created by richard on 18/10/24.
#include <iostream>

void myValue(std::string myPar) { //makes a private clone of the value
    //passes the string
    std::cout << myPar << std::endl;
}
void myReference(std::string& myPar) { //changes the original variable in the function it's called from
    std::cout << myPar << std::endl;
}
void myFunction(std::string* myPar) { //TODO: Figure out how pass by pointer works
    std::cout << *myPar << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//value
//refference
//function