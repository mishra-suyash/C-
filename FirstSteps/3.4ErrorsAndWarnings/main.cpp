#include<iostream>

int main(){

    //Compile time error (no semicolon)
    std::cout<<"Hello World!"<<std::endl;

    //Run Time error
    int value=7/0;
    std::cout<<"value : "<<value<<std::endl;
    return 0;
}