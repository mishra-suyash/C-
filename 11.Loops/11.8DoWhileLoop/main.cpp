#include<iostream>

int main(){

    //do while loop : runs first and test runs at last

    const int COUNT {10};
    size_t i {0};  // Iteration Declaration

    do{
        std::cout << i << " : " << "I love C++" << std::endl;
        ++i; //Increament
    }while(i < COUNT); //Test

    std::cout << "Loop Done!" << std::endl ;

    //But if we put the already false condition like i=11 in declaration
    //Then also the loop will run once as it checks the condition after wards
    //do while can be used to make menus i.e. runs on input taken inside the loop instead of normal increase of 'i'

    return 0;

}