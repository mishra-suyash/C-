#include<iostream>

int main(){

    int num1= 15; //Decimal Number
    int num2= 017; //Octal Number
    int num3= 0x0F; //Hecadecimal Number
    int num4= 0b00001111; //Binary Number

    std::cout << "number 1 : " << num1 << std::endl;
    std::cout << "number 2 : " << num2 << std::endl;
    std::cout << "number 3 : " << num3 << std::endl;
    std::cout << "number 4 : " << num4 << std::endl;

    return 0;
}