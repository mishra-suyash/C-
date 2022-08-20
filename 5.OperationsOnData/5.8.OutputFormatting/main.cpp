#include<iostream>
#include<iomanip>

int main(){

    //std::endl : places a new line character on the output stream
    //This is identical to placing '\n' on the output stream

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl << "------------------------------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello \n";
    std::cout << "World \n";

    //=======================================================================================

    std::cout << std::endl;

    //std::flush : flushes the output buffer to its final destination.
    std::cout << "This is a nice message......" << std::endl << std::flush;
    //After this std::flush, we're sure that at this line, the message has been sent to the stream. This may be important for some applications



    //==========================================
    std::cout << std::endl;


    //std::setw() : Adjsuts the field width for the item aobut to be printed/
    //The setw() manipulator only affects the next value to be printed

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Lastname" << " " << "Firstname" << " AGE" << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "JOsh" << " " << "Carr" << "28" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << "29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted Table : " << std::endl;
    
    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "AGE" <<std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" <<std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" <<std::endl;
    std::cout << std::setw(10) << "JOrdan" << std::setw(10) << "Parker" << std::setw(5) << "45" <<std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" <<std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "28" <<std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" <<std::endl;


    int col_width {15};
    int col_width_age {5};

    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width_age) << "AGE" <<std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width_age) << "25" <<std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width_age) << "33" <<std::endl;
    std::cout << std::setw(col_width) << "JOrdan" << std::setw(col_width) << "Parker" << std::setw(col_width_age) << "45" <<std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width_age) << "21" <<std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width_age) << "28" <<std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width_age) << "29" <<std::endl;

    //==============================================================================================================================================

    std::cout << std::endl;

    //Justify : Values can be justified in their fields. There are three manipulators for adjusting the justification: left, right and internal

    //right justified
    std::cout << std::endl;
    std::cout << "Right justified table(default) : " << std::endl;

    col_width = 20;

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width_age) << "AGE" <<std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width_age) << "25" <<std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width_age) << "33" <<std::endl;
    std::cout << std::setw(col_width) << "JOrdan" << std::setw(col_width) << "Parker" << std::setw(col_width_age) << "45" <<std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width_age) << "21" <<std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width_age) << "28" <<std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width_age) << "29" <<std::endl;

    std::cout << std::endl;

    //left justified
    std::cout << std::left;
    std::cout << "left justified table : " << std::endl;

    col_width = 20;

    std::cout << std::endl;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width_age) << "AGE" <<std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width_age) << "25" <<std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width_age) << "33" <<std::endl;
    std::cout << std::setw(col_width) << "JOrdan" << std::setw(col_width) << "Parker" << std::setw(col_width_age) << "45" <<std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width_age) << "21" <<std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width_age) << "28" <<std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width_age) << "29" <<std::endl;

    //Internal justified : sign is left justified, data is right justified
    std::cout << std::endl;
    std::cout << "Internal Justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    //==============================================================================================================================================

    std::cout << std::endl;

    //Setfill : Empty spaces are going to be filled by Specified character
    std::cout << std::left;

    col_width = 20;

    std::cout << std::endl;
    std::cout << std::setfill('-'); // Fill the character 
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width_age) << "AGE" <<std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width_age) << "25" <<std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width_age) << "33" <<std::endl;
    std::cout << std::setw(col_width) << "JOrdan" << std::setw(col_width) << "Parker" << std::setw(col_width_age) << "45" <<std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width_age) << "21" <<std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width_age) << "28" <<std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width_age) << "29" <<std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

   

    //boolalpha and noboolalpha : control bool output format : 1/0 or true/false

    bool condition {true};
    bool other_condition {false};

    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    //showpos and noshowpos : show or hide the + sign for positive numbers

    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;


    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    //different number systems : std::dec, std::hex, std::oct

    int pos_int {121212};
    int neg_int {-323232};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int(dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int(hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int(oct) : " << std::oct << neg_int << std::endl;

    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var(dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var(hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var(oct) : " << std::oct << double_var << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    //Uppercase and nouppercase

    pos_int = 212121;
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << std::nouppercase;
    std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;

    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int(dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int(hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int(oct) : " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    //fixed and scientific : for floating point values

    double a {3.141592653589793238462643383279};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << std::endl;
    std::cout << "double values  (default : use scientific where neccesary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;


    std::cout << std::endl;
    std::cout << "double values  (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values  (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values  (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);  //There is no official way to set floating type output to default.
                                                               //But we can use this "hack" to get the defaults
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    //setprecision() : the number of digits printed out for a floating point. Default precision is 6 digits

    a=3.141592653589793238462643383279;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : "  << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    //If the precision is bigger than supported by the type, you're just print garbage value


    std::cout << std::endl;
    //==============================================================================================================================================

    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point

    double d{34.1};
    double e{101.99};
    double f{12.0};
    int g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "noshowpoint (back to defaults) : " << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    //==============================================================================================================================================

    return 0;
}