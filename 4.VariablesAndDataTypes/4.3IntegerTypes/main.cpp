#include<iostream>

int main(){
    // Integer Datatypes Typically take 4 Bytes or more
    // Variable is a named piece of memory that we can use to store different types of data
    // Variable may contain random garbage value. WARNING

    int elephant_count; // Random value but some compilers may assign '0'

    //Brace Intializations
    int lion_count{}; //Intializes to zero

    int dog_count {10}; //Intializes to 10

    int cat_count {15}; //Intializes to 15

    int domesticated_animals {dog_count+cat_count+lion_count}; //Can use expression as intializer

    int new_number {};

    std::cout << "Elephant count : " << elephant_count <<std::endl;
    std::cout << "Lion count : " << lion_count <<std::endl;
    std::cout << "Dog count : " << dog_count <<std::endl;
    std::cout << "cat count : " << cat_count <<std::endl;
    std::cout << "Domesticated Animal count : " << domesticated_animals <<std::endl;


    //Functional Intialization
    std::cout << std::endl;
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count+orange_count);

    //Information Lost . Less Safe than braced initializers. Silently chop off the fractional value
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count : " << apple_count << std::endl;
    std::cout << "Orange count : " << orange_count << std::endl;
    std::cout << "Fruit count : " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion : " << narrowing_conversion_functional << std::endl;

    //Assignment notation
    std::cout << std::endl;
    int bike_count =2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // Less Safe than braced initializers. Silently chop off the fractional value

    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count : " << truck_count << std::endl;
    std::cout << "Vehicle count : " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion : " << narrowing_conversion_assignment << std::endl;

    //Check the size sizeof 
    std::cout << std::endl;
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;

    //Narrowing Conversion
    std::cout << std::endl;
    std::cout << "GCC compilet allow narrowing down in Functional Intialization and Assignment Intialization but give an error in Braced Intialization" << std::endl;
    return 0;

}