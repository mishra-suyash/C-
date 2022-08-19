#include<iostream>

int main(){

    int value {5};
    
    //Increment by one 
    value = value +1; //6
    std::cout << "The value is : " << value << std::endl;

    value = 5; //Reset value to 5

    //Decrement by one
    value = value - 1; //4
    std::cout << "The value is : " << value << std::endl;

    //========================================================

    std::cout << " ====Postfix increment and decrement==========" << value++ << std::endl;
    
    //Postfix : Incrementing and Decrementing
    std::cout << std::endl;
    
    //Increment with postfix ++ : Retrieve the current value then increment afterward 

    //Reset value to 5
    value =5;
    std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
    std::cout << "The value is : " << value << std::endl; //6

    std::cout << std::endl;

    //Decrement with postfix

    //Reset value to 5 
    value = 5;
    std::cout << "The value is (Decrementing) : " << value-- << std::endl; //5
    std::cout << "The value is : " << value << std::endl; //4

        //========================================================

    std::cout << " ====Prefix increment and decrement==========" << ++value << std::endl;
    
    //Prefix : Incrementing and Decrementing
    std::cout << std::endl;
    
    //Increment with prefix ++ : Increment the current value then retrieve afterward 

    //Reset value to 5
    value =5;
    std::cout << "The value is (incrementing) : " << ++value << std::endl; //6
    std::cout << "The value is : " << value << std::endl; //6

    std::cout << std::endl;

    //Decrement with prefix

    //Reset value to 5 
    value = 5;
    std::cout << "The value is (Decrementing) : " << --value << std::endl; //4
    std::cout << "The value is : " << value << std::endl; //4

    return 0;
}