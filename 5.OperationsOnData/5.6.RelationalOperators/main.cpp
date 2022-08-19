#include<iostream>

int main(){
    
    int number1 {45};
    int number2 {60};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha ; //Make bool show up as true/false instead of 1/0
    //We need understand the need for parentheses here if not used "invalid operands of types 'int' and '<unresolved overloaded function type>' to binary 'operator<<" shows up
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl; //Comparision operators evaluate to boolean in other words they give true or false
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl; //less than or equal to 
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl; //greater than
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl; //greater than or equal to 
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl; //equal to 
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl; //not equal to

    std::cout << std::endl;
    std::cout << "store comparision result and use it later" << std::endl;

    bool result = (number1 ==number2);

    std::cout << number1 << " == " << number2 << " : " << result << std::endl;

    return 0;

}