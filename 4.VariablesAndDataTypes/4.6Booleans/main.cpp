#include<iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Stop!";
    }else{
        std::cout << "Go through!" << std::endl;
    }
    std::cout << std::endl;
    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green" << std::endl;
    }

    //sizeof(bool) is 1 byte

    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

    //Printing out a bool
    //1 -->> true
    //0 -->> false

    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    
    std::cout << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    
    return 0;

}