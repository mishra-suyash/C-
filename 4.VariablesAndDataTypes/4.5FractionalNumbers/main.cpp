#include<iostream>

int main(){
    //Declare and initialize the variables
    float number1 {1.1234567890f};
    double number2 {1.1234567890};
    long double number3 {1.1234567890L};

    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;
    return 0;
}