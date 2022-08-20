#include<iostream>

int main(){
    
    //Addition 
    int number1 {2};
    int number2 {7};

    std::cout << "Addition " << std::endl;
    int result = number1 +number2;
    std::cout << "result : " << result << std::endl;

    std::cout << std::endl << "------------------" << std::endl << std::endl;

    //Subtraction
    std::cout << "Subtraction " << std::endl;
    result = number1 - number2;
    std::cout << "result : " << result << std::endl;

    result = number2 - number1;
    std::cout << "result : " << result << std::endl;

    std::cout << std::endl << "------------------" << std::endl << std::endl;

    //Multiplication
    std::cout << "Multiplication " << std::endl;
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;

    std::cout << std::endl << "------------------" << std::endl << std::endl;

    //Division
    std::cout << "Division " << std::endl;
    result = number1 / number2;
    std::cout << "result : " << result << std::endl;

    result = number2 / number1;
    std::cout << "result : " << result << std::endl;

    std::cout << std::endl << "------------------" << std::endl << std::endl;

    //Modulus
    std::cout << "Modulus " << std::endl;
    result = number1 % number2;
    std::cout << "result : " << result << std::endl;

    result = number2 % number1;
    std::cout << "result : " << result << std::endl;

    result = 31 % 10;
    std::cout << "result : " << result << std::endl;

    std::cout << std::endl << "------------------" << std::endl << std::endl;  

    return 0;
}