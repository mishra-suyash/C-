#include<iostream>
#include<iomanip>

int main(){
    //Declare and initialize the variables
    float number1 {1.1234567890f};
    double number2 {1.1234567890123456789};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //Precision 
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 <<std::endl; //7 digits
    std::cout << "number2 is : " << number2 <<std::endl; //15 digits
    std::cout << "number3 is : " << number3 <<std::endl; //15+ digits

    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 {123456789.0f}; //Error :narrowing 
    float number5 {123456789.0f}; //Error :narrowing conversion still choppped off because of 'f' suffix

    std::cout << "number4 : " << number4 << std::endl;
    std::cout << "number5 : " << number5 << std::endl;

    //Scientific notation 
    //What we have seen so farin terms of floating point types 
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    double number6 {123456789};
    double number7 {1.23456789e8};
    double number8 {1.234e8}; // Can omit the lower 56789 
                                //for simplicity if out application allows
    double number9 {0.00000000002498};
    double number10 {3.498e-11}; //multiply with 10 exp{-11}
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;
    std::cout << "number10 is : " << number10 << std::endl;
    
    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and Nan" << std::endl;

    double number11 {5.6};
    double number12 {}; //Initializes to 0
    double number13 {}; //Initializes to 0

    //Infinity
    double result {number11/number12};
    std::cout << number11 << "/" << number12 << "   yields   " << result << std::endl;
    std::cout << result << "+" << number11 << "  yields  " << result + number10 <<std::endl;

    //NaN (Not a Number)

    result= number12/number13;

    std::cout << number11 << "/" << number13 <<   "=  " << result << std::endl;

    return 0;
}