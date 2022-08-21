#include<iostream>

int main(){
    
    //Pillars of any loop
    //1. Iterator
    //2. Starting Condition
    //3. Test( controls when the loop stops)
    //4. Increment(Decrement)
    //5. Loop Body

    //size_t is Not a Type, just a type alias for some unsigned int representation

    //Print "I love C++" 10 times
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;

    std::cout << std::endl;

    //==========================================================

    //for loop : the good way
    std::cout << "Using for loop" << std::endl;

    for(unsigned int i{0} ; i < 10 ; ++i){
        std::cout << i << " : " << "I love C++" << std::endl;
    }
    std::cout << "loop done!" << std::endl;

    std::cout << std::endl;

    //==========================================================
 
    // Use size_t : a representation of some unsigned int for positive numbers [sizes]

    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : " << "I love C++" << std::endl;
    }

    std::cout << std::endl;

    //==========================================================

    std::cout << "sizeof(size_t) : " << sizeof(size_t) << " Bytes" << std::endl;

    //Scope of the Iterator

    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : " << "I love C++" << std::endl;
    }

    std::cout << "Loop Done!" << std::endl;

    //scope is 'i' is only within the loop i.e. 'i' is undeclared outside the loop

    //Iterator declared outside the loop
    size_t i{0};

    for( ; i < 10 ; ++i){
        std::cout << i << " : " << "I love C++" << std::endl;
    }
    //scope is 'i' is all over the main function i.e. 'i' is declared for outside the loop

    //Don't hard code values : BAD!

    const size_t COUNT {10};
    for( ; i < COUNT ; ++i){
        std::cout << i << " : " << "I love C++" << std::endl;
    }

    return 0;

}