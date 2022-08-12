#include<iostream>

int main(){
    
    int value1 {10};
    int value2 {-300};

    std::cout << "value1 : " << value1<< std::endl;
    std::cout << "value2 : " << value2<< std::endl;
    std::cout <<std::endl;
    std::cout << "sizeof(value1) " << sizeof(value1)<< " Bytes"<< std::endl;
    std::cout << "sizeof(value2) " << sizeof(value2)<< " Bytes"<< std::endl;

    unsigned int value3 {4};
    //unsigned int value4 {-5}; Compiler error
    std::cout << "sizeof(value3) " << sizeof(value3)<< " Bytes"<< std::endl;
    
    //short and long
    short short_var {-32768}; //2 Bytes
    short int short_int {455};
    signed short signed_short {122};//
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    long long_var {88}; //4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};


    long long long_long {888}; // 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout <<std::endl;
    std::cout << "sizeof(short) : "   << sizeof(short_var)<< " Bytes"<< std::endl;
    std::cout << "sizeof(short int) : " << sizeof(short_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed short) : " << sizeof(signed_short)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed short int ) : " << sizeof(signed_short_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(unsigned short int) : " << sizeof(unsigned_short_int)<< " Bytes"<< std::endl<<std::endl;



    std::cout << "sizeof(long) : "   << sizeof(long_var)<< " Bytes"<< std::endl;
    std::cout << "sizeof(long int) : " << sizeof(long_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed long) : " << sizeof(signed_long)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed long int ) : " << sizeof(signed_long_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(unsigned long int) : " << sizeof(unsigned_long_int)<< " Bytes"<< std::endl<<std::endl;

    std::cout << "sizeof(long long) : "   << sizeof(long_long)<< " Bytes"<< std::endl;
    std::cout << "sizeof(long long int) : " << sizeof(long_long_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed long long) : " << sizeof(signed_long_long)<< " Bytes"<< std::endl;
    std::cout << "sizeof(signed long long int ) : " << sizeof(signed_long_long_int)<< " Bytes"<< std::endl;
    std::cout << "sizeof(unsigned long long int) : " << sizeof(unsigned_long_long_int)<< " Bytes"<< std::endl<<std::endl;

    return 0;
}