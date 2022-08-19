#include<iostream>

int main(){

    int value {45};
    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;
    value+=5;  // equivalent to value =value + 5
    std::cout << "The value is (After +=5) : " << value << std::endl; //50

    value =45; //reset vlaue to 45

    std::cout << std::endl;
    value-=5;  // equivalent to value =value - 5
    std::cout << "The value is (After -=5) : " << value << std::endl; //40

    value =45; //reset vlaue to 45
    
    std::cout << std::endl;
    value*=5;  // equivalent to value =value * 5
    std::cout << "The value is (After *=5) : " << value << std::endl; //225

    value =45; //reset vlaue to 45

    std::cout << std::endl;
    value/=5;  // equivalent to value =value / 5
    std::cout << "The value is (After /=5) : " << value << std::endl; //9

    value =45; //reset vlaue to 45

    std::cout << std::endl;
    value%=5;  // equivalent to value =value % 5
    std::cout << "The value is (After %=5) : " << value << std::endl; //0


    return 0;
}