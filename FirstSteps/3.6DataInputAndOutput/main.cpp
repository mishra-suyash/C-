#include<iostream>
#include<string>

int main(){
    //Printing Data
    std::cout<<"Hello C++200"<< std::endl;

    int age{21};
    std::cout<<"Age : "<< age<< std::endl;

    std::cerr<<"Error message : Something is wrong"<<std::endl;
    std::clog<<"Log Message : Something Happened"<<std::endl;

    //
    int age1;
    std::string name;
    std::cout<< "Please type your name and age : " << std::endl;

    /*std::cin >> name;
        if you want to input Name and surname both i.e. with space use getline()
    */
   
    std::getline(std::cin,name);
    std::cin >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

    return 0;
}