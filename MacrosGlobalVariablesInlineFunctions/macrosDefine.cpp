#include<iostream>
using namespace std;

//creating a macro

#define PI 3.14
//when the program compiles the compiler will replace all values of PI with 3.14 before compilation

//example 2 
#define AREA(l, b) (l* b)



// example 3 
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

int main()
{
    int r = 5;

    double area = PI*r*r;
    cout<<"Area is "<<area<<endl;

    cout<<"AREA of rectangle is " <<AREA(6,7)<<endl;

    cout<<"The string is "<<INSTAGRAM<<endl; 
    return 0;
}

/*A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by #define directive. Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro. Macro definitions need not be terminated by a semi-colon(;).*/