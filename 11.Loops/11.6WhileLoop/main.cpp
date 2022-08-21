#include<iostream>

int main(){
    
    size_t i{0}; // Iterator declaration
    const size_t COUNT{10} ;
    while (i < COUNT) //Test
    {
        std::cout << i << " : " << "I love C++"<< std::endl;
        ++i; // Increment
    }

    std::cout << "Loop done !" << std::endl;
    

    return 0;

}