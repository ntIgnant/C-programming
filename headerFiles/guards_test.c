// So, as the compiler just 'adds up' everything in the compilation, if the headerfile (which is just text, not c)
// is Included more than once in a project, the compiler will interpret the inclusion as 'twice' which will result in an error
// 
// It is like definint a variable twice, like
//
//
//      file1.h(includes stdlib.h) ------------> file2.h(includes file1.h) ---------> main.c(includes stdlib AND file2.h)

// So there need to be guards to 'protect' if something was already added

#ifndef ARITHMETIC_UTILS // the name of the headerfile should be in uppercase
                         // This is jut a convention to show that it is a MACRO
#define ARITHMETIC_UTILS

// This is like
// if not defined:
// define:

#include "arithmetic_utils.h" // Include the headeder file, if it was already defined (used in another file), the
                              // preprocessor will skip the assignation
#include <stdio.h>

int main(){
    int num1 = 4, num2 = 11;
    int SumRes = Sum(num1, num2); // The 'Sum' function is inside the headerfile that is being defined by the macro
                                  // 'ARITHMETIC_UTILS'

    printf("Sum: %d\n", SumRes);

    return 0;
}

#endif // preprocessor to finish the 'if not defined' conditional block
       //
       // all the #... like #include, #define, ..., are preprocessor directives, things that tell the preprocessor
       // what do do before the compilation, like instructions to be all set
