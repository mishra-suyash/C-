#include<iostream>

int main(){

    //syntax result = (condition) ? option1 : option2 :
    //equivalent to
    /*
    if (condition){
        result = option1;
    }else {
        result = option2;
    }
    */

    int max {};

    int a {35};
    int b {20};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if (a > b){
        max = a;
    }else {
        max = b;
    }

    std::cout << "max : " << max << std::endl;

    std::cout << std::endl;

    std::cout << "using ternary operator" << std::endl;
    max=0; //Reseting max
    max = (a > b) ? a : b ; //Ternary Operator
    std::cout << "max : " << max << std::endl;

    //Ternary Intialization
    std::cout << std::endl;
    std::cout << "Using Ternary Initialization" << std::endl;
    int result = (a > b) ? a : b ; //Ternary Initializes
    std::cout << "max : " << max << std::endl;

    return 0;
}