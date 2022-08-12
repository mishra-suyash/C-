#include<iostream>

int add_func(int first_param,int second_param)
{
    int result= first_param+second_param;
    return result;
}

int main(){
    int firstnumber {13}; //Statement
    int second_number {7}; 
    std::cout<< "First Number : "<< firstnumber<< std::endl;
    std::cout<<"Second Number : "<< second_number<<std::endl;

    int sum=add_func(firstnumber,second_number);
    std::cout<<"Sum(Taken from add_func) : "<<sum<<std::endl;

    int sum1=firstnumber+second_number;
    std::cout<<"Sum(Taken from addition operator) : "<<sum1<<std::endl;

    return 0;
}